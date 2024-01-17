/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 07:16:31 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 19:06:13 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <charconv>
#include <iomanip>
#include <ios>


int StorData(std::list<KeyValue> &DataContainer, char TxtSeparator, std::string FilePath)
{
    std::string line;
    std::string key;
    double NewValue;
    std::string value;
    size_t comma;
    std::ifstream iFile(FilePath);
    
    if(!iFile) 
    {
        std::cerr << "File not opened!\n";
        return 0;
    }
    
    std::getline(iFile, line);
    
    while(std::getline(iFile, line)) 
    {
        if(line.empty())
            continue;
       
        comma = line.find(TxtSeparator);
        key = line.substr(0, comma);
        value = line.substr(comma + 1);
        
        std::istringstream num(value);
        num >> NewValue;
        
        if(comma == std::string::npos)
        {
            NewValue = NO_SEPARATOR;
            comma = 0;
        }
        
        DataContainer.push_back(KeyValue(key, NewValue));
    }
    iFile.close();
    
    return 1;
}


int CheckDate(std::string date)
{    
    double Year = 0;
    double Month = 0;
    double Day = 0;
    int DATE_SEPARATOR = 0;
    std::string::iterator it;
    
    it = date.begin();
    while (it != date.end()) 
    {
        if(*it == DACH)
            DATE_SEPARATOR++;
        it++;
    }
    
    if(DATE_SEPARATOR != 2 || date.length() > 11)
        return 0;
    std::istringstream num(date.substr(0, 4));
    num >> Year;
    if(!(!num.fail() && num.eof()))
        return 0;
    std::istringstream num2(date.substr(5, 2));
    num2 >> Month;
    if(!(!num2.fail() && num2.eof()))
        return 0;
    std::istringstream num3(date.substr(8, 2));
    num3 >> Day;
    if(!(!num3.fail() && num3.eof()))
        return 0;
    if((Year > MAX_YEAR || Year < MIN_YEAR) || (Month > MAX_MONTH || Month < MIN_MONTH) || (Day > MAX_DAY || Day < MIN_DAY)) 
        return 0;
    return 1;
}


long converter(std::string date)
{
    long Year;
    long Month;
    long Day;
    char Dach;
    std::istringstream num(date);

    num >> Year >> Dach >> Month >> Dach >> Day;

    Year *= 10000;
    Month *= 100;

    return (Year + Month + Day);
}


double ValueMultipliedByTheExchangeRate(std::list<KeyValue> &Data, std::string date, double value)
{
    std::list<KeyValue>::const_iterator it;
    double DateInDataBase;
    double DateInUserFile;

    DateInUserFile = converter(date);
    it = Data.begin();   
    if(DateInUserFile <= converter(it->key))
        return value*it->value;
    while(it != Data.end())
    {
        DateInDataBase = converter(it->key);
        if(DateInDataBase == DateInUserFile)
            return it->value*value;
        else if(DateInDataBase > DateInUserFile)
        {
            it--;
            return value*it->value;
        }
        it++;
    }
    it--;
    return it->value*value;
}

void PrintResult(std::list<KeyValue> &Data, std::list<KeyValue> &Txt)
{
    double Value = 0;
    bool ValidDate;
    std::list<KeyValue>::const_iterator it;
    for (it = Txt.begin(); it != Txt.end(); it++) 
    {
        ValidDate = CheckDate(it->key);
        if(it->value == NO_SEPARATOR || !ValidDate)
            std::cout<< "Error: bad input => "<<it->key<<std::endl;
        else if(it->value >= INT_MAX)
            std::cout<<"Error: to large number.\n";
        else if(it->value < 0)
            std::cout<<"Error: not a positive number. \n";
        else
        {
            Value = ValueMultipliedByTheExchangeRate(Data, it->key, it->value);
            std::cout <<it->key <<" => "<< it->value << " = " <<std::fixed<<std::setprecision(2)<<Value<<std::endl;
        }
    }
}

void PrintDataBase( std::list<KeyValue>  database)
{
    std::list<KeyValue>::const_iterator it;
    for (it = database.begin(); it != database.end(); ++it) 
        std::cout <<it->key <<" | "<< it->value << std::endl;
}


