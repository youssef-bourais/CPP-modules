/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 03:30:37 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/06 05:20:40 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream> 
#include <iostream>
#include <map>
#include <sstream> //istringstream

void printDataBase(std::map<std::string, float> const database);



int fill_database(std::map<std::string, float> &database, char DataSeparator, std::string FilePath)
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

int StorUserData(std::map<std::string, float> &database, char DataSeparator, std::string FilePath)
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
        size_t comma = line.find(DataSeparator);
        std::istringstream num(line.substr(comma + 1));
        num >> database[line.substr(0, comma)];
        if(!(!num.fail() && num.eof()))
            database[line.substr(0, comma)] = -1;
    }
    iFile.close();
    return 1;
}

int readDataFromUser(std::string file)
{
    std::map<std::string, float> UserData;
    if(!StorUserData(UserData, '|', file))
        return 0;
    printDataBase(UserData);
    return 1;
}

void printDataBase(std::map<std::string, float> const database)
{
    std::map<std::string, float>::const_iterator it;
    for (it = database.begin(); it != database.end(); ++it) 
        std::cout << it->first <<" | "<< it->second << std::endl;
}

int  getDataBase()
{
    std::map<std::string, float> database;
    if(!fill_database(database, ',', "./data.csv"))
        return 0;
    return 1;
}

int main(int ac, char *av[])
{
    if (ac != 2) 
    {
        std::cout << "please provide one file!"<<std::endl;
        return 0;
    }
    if(!getDataBase())
        return EXIT_FAILURE;
    if(!readDataFromUser(av[1]))
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
