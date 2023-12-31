/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 03:30:37 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 04:16:17 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"




int main(int ac, char *av[])
{
    std::list<KeyValue> DataBase;
    std::list<KeyValue> UserData;
    if (ac != 2) 
    {
        std::cout << "Please provide one file!"<<std::endl;
        return 0;
    }
    if(!StorData(DataBase, ',', "./data.csv") || !StorData(UserData, '|', av[1]))
        return EXIT_FAILURE;
    PrintResult(DataBase, UserData);
    return EXIT_SUCCESS;
}


