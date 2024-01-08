/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 03:30:37 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 01:54:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <fstream> 
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <sstream> //istringstream

#define NO_SEPARATOR -1337

void PrintDataBase(std::map<std::string, float> const database);

/* int GetDatabase(std::map<std::string, float> &database, char DataSeparator, std::string FilePath) */
/* { */
/*    std::ifstream iFile(FilePath); */
/*     if(!iFile)  */
/*     { */
/*         std::cerr << "File not opened!\n"; */
/*         return 0; */
/*     } */
/*     std::string line; */
/*     int i = 0; */
/*     std::getline(iFile, line); */
/*     while(std::getline(iFile, line))  */
/*     { */
/*         size_t comma = line.find(DataSeparator); */
/*         if(comma == std::string::npos) */
/*         { */
/*             std::cout<<"Missing "<<DataSeparator<<" in the Database, line: "<< i<<'\n';             */
/*             return 0;  */
/*         } */
/*         std::istringstream num(line.substr(comma + 1)); */
/*         num >> database[line.substr(0, comma)]; */
/*         if(!(!num.fail() && num.eof())) */
/*         { */
/*             std::cout<<"not a number!"<<'\n'; */
/*             return 0; */
/*         } */
/*         i++; */
/*     } */
/*     iFile.close(); */
/*     return 1; */
/* } */
/**/

int StorData(std::map<std::string, float> &DataContainer, char TxtSeparator, std::string FilePath)
{
    std::ifstream iFile(FilePath);
    if(!iFile) 
    {
        std::cerr << "File not opened!\n";
        return 0;
    }
    std::string line;
    std::getline(iFile, line);
    while(std::getline(iFile, line)) 
    {
        if(line.empty())
            continue;
        size_t comma = line.find(TxtSeparator);
        std::string key = line.substr(0, comma);
        std::string value = line.substr(comma + 1);
        std::istringstream num(value);
        num >> DataContainer[key];
        if(comma == std::string::npos)
        {
            DataContainer[key] = NO_SEPARATOR;
            comma = 0;
        }
    }
    iFile.close();
    return 1;
}

#define DACH '-' 

int CheckDate(std::string date)
{    
    double year = 0;
    double month = 0;
    double day = 0;
    int dach = 0;

    std::string::iterator it;
    it = date.begin();
    while (it != date.end()) 
    {
        if(*it == DACH)
            dach++;
        it++;
    }
    if(dach != 2 || date.length() > 11)
        return 0;
    std::istringstream num(date.substr(0, 4));
    num >> year;
    if(!(!num.fail() && num.eof()))
        return 0;
    std::istringstream num2(date.substr(5, 2));
    num2 >> month;
    if(!(!num2.fail() && num2.eof()))
        return 0;
    std::istringstream num3(date.substr(8, 2));
    num3 >> day;
    if(!(!num3.fail() && num3.eof()))
        return 0;
    if((year > 2050 || year < 0) || (month < 1 || month > 12) || (day < 1 || day > 31)) 
        return 0;
    return 1;
}


long converter(std::string date)
{
    long year;
    long month;
    long day;
    char dach;
    std::istringstream num(date);

    num >> year >> dach >> month >> dach >> day;

    year *= std::pow(10, 4);
    month *= std::pow(10, 2);

    return (year + month + day);
}


double value_multiplied_by_the_exchange_rate(std::map<std::string, float> &Data, std::string date, float value)
{
    int new_value = 0;
    std::map<std::string, float>::const_iterator it;
    double DateInDataBase;
    double DateInUserFile;

    DateInUserFile = converter(date);
    it = Data.begin();   
    if(DateInUserFile <= converter(it->first))
        return value*it->second;
    int i = 0;
    while(it != Data.end())
    {
        DateInDataBase = converter(it->first);
        if(DateInDataBase == DateInUserFile)
        {
            new_value = value*it->second;
            return new_value;
        }
        else if(DateInDataBase > DateInUserFile)
        {
            it--;
            return value*it->second;
        }
        i++;
        it++;
    }
    it--;
    new_value = it->second;
    return new_value*value;
}


void PrintResult(std::map<std::string, float> &Data, std::map<std::string, float> &Txt)
{
    bool ValidDate;
    double Value = 0;
    std::map<std::string, float>::const_iterator it;
    for (it = Txt.begin(); it != Txt.end(); it++) 
    {
        ValidDate = CheckDate(it->first);
        Value = value_multiplied_by_the_exchange_rate(Data, it->first, it->second);
        if(it->second == NO_SEPARATOR || !ValidDate)
            std::cout<< "Error: bad input => "<<it->first<<std::endl;
        else if(it->second >= INT_MAX)
            std::cout<<"Error: to large number."<<std::endl;
        else if(it->second < 0)
            std::cout<<" Error: not a positive number. "<<std::endl;
        else
        {

            std::cout <<it->first <<" => "<< it->second << " = ";
            std::cout <<Value<<std::endl;
        }
    }
}

void PrintDataBase(std::map<std::string, float> const database)
{
    std::map<std::string, float>::const_iterator it;
    for (it = database.begin(); it != database.end(); ++it) 
        std::cout <<it->first <<" | "<< it->second << std::endl;
}

int main(int ac, char *av[])
{
    std::map<std::string, float> DataBase;
    std::map<std::string, float> UserData;
    if (ac != 2) 
    {
        std::cout << "please provide one file!"<<std::endl;
        return 0;
    }
    if(!StorData(DataBase, ',', "./data.csv") || !StorData(UserData, '|', av[1]))
        return EXIT_FAILURE;
    PrintResult(DataBase, UserData);
    /* PrintDataBase(UserData); */
    return EXIT_SUCCESS;
}
