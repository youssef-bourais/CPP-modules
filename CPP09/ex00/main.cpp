/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 03:30:37 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/07 08:09:38 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cmath>
#include <cstdlib>
#include <fstream> 
#include <iostream>
#include <map>
#include <sstream> //istringstream

#define NO_PIPE -1337

void PrintDataBase(std::map<std::string, float> const database);
int GetDatabase(std::map<std::string, float> &database, char DataSeparator, std::string FilePath)
{
   std::ifstream iFile(FilePath);
    if(!iFile) 
    {
        std::cerr << "File not opened!\n";
        return 0;
    }
    std::string line;
    int i = 0;
    std::getline(iFile, line);
    while(std::getline(iFile, line)) 
    {
        size_t comma = line.find(DataSeparator);
        if(comma == std::string::npos)
        {
            std::cout<<"Missing "<<DataSeparator<<" in the Database, line: "<< i<<'\n';            
            return 0; 
        }
        std::istringstream num(line.substr(comma + 1));
        num >> database[line.substr(0, comma)];
        if(!(!num.fail() && num.eof()))
        {
            std::cout<<"not a number!"<<'\n';
            return 0;
        }
        i++;
    }
    iFile.close();
    return 1;
}

int StorUserData(std::map<std::string, float> &Txt_TxT, char TxtSeparator, std::string FilePath)
{
    std::ifstream iFile(FilePath);
    if(!iFile) 
    {
        std::cerr << "File not opened!\n";
        return 0;
    }
    std::string line;
    std::getline(iFile, line);
    int i = 0;
    while(std::getline(iFile, line)) 
    {
        size_t comma = line.find(TxtSeparator);
        std::string key = line.substr(0, comma);
        std::string value = line.substr(comma + 1);
        std::istringstream num(value);
        num >> Txt_TxT[key];
        if(comma == std::string::npos)
        {
            Txt_TxT[key] = NO_PIPE;
            comma = 0;
        }
        i++;
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


// function slowing the programe need to fix
int value_multiplied_by_the_exchange_rate(std::map<std::string, float> &Data, std::string date, float value)
{
    int new_value = 100;
    std::map<std::string, float>::const_iterator it;
    long DateInDataBase;
    long DateInUserFile;

    DateInUserFile = converter(date);
    it = Data.begin();   
    std::cout<< it->second<<" "<<it->second<<std::endl; ///////////////////////////////////////////////
    exit(0);
    if(value <= converter(it->first))
        return value*it->second;
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
        it++;
    }
    it--;
    new_value = it->second;
    PrintDataBase(Data);
    return new_value*value;
}


void PrintResult(std::map<std::string, float> &Data, std::map<std::string, float> &Txt)
{
    bool ValidDate;
    int Value = 0;
    std::map<std::string, float>::const_iterator it;
    for (it = Txt.begin(); it != Txt.end(); it++) 
    {
        ValidDate = CheckDate(it->first);
        Value = value_multiplied_by_the_exchange_rate(Data, it->first, it->second);
        /* if(it->second == NO_PIPE || !ValidDate) */
        /*     std::cout<< "Error: bad input => "<<it->first<<std::endl; */
        /* else if(it->second >= INT_MAX) */
        /*     std::cout<<"Error: to large number."<<std::endl; */
        /* else if(it->second < 0) */
        /*     std::cout<<" Error: not a positive number. "<<std::endl; */
        /* else */
        /*     std::cout <<it->first <<" => "<< it->second << " = "<<Value<<std::endl; */
    }
}

int readDataFromUser(std::string file, std::map<std::string, float> &UserData)
{
    if(!StorUserData(UserData, '|', file))
        return 0;
    return 1;
}

void PrintDataBase(std::map<std::string, float> const database)
{
    std::map<std::string, float>::const_iterator it;
    for (it = database.begin(); it != database.end(); ++it) 
        std::cout <<it->first <<" | "<< it->second << std::endl;
}

int  getDataBase(std::map<std::string, float> &DataBase)
{
    if(!GetDatabase(DataBase, ',', "./data.csv"))
        return 0;
    return 1;
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
    if(!getDataBase(DataBase) || !readDataFromUser(av[1], UserData))
        return EXIT_FAILURE;
    PrintResult(DataBase, UserData);
    /* PrintDataBase(DataBase); */
    return EXIT_SUCCESS;
}
