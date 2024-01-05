/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 03:30:37 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/06 00:25:06 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <map>


int fill_database(std::map<std::string, float> &database, std::string file)
{
   std::ifstream iFile(file.c_str());
    if(!iFile) 
    {
        std::cerr << "File not opened!\n";
        return 0;
    }
    return 1;
}


int  BitcoinExchange(std::string inputfile)
{
    std::map<std::string, float> database;
    if(!fill_database(database, inputfile))
        return 1;

    return 0;
}
 













int main(int ac, char *av[])
{
    if (ac != 2) 
    {
        std::cout << "please provide a file"<<std::endl;
        return 0;
    }
    if(BitcoinExchange(av[1]))
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
