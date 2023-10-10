/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:19:58 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/10 05:00:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


std::string truncat(std::string text) 
{
    if (text.length() > 10) 
        return (text.substr(0, 9) + ".");
    else 
        return text;
}


int is_digit(char c)
{
    if(c >= 48 && c <= 57)
        return 1;
    return 0;
}

int is_number(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}


int main()
{
    std::string command;
    int i;

    phonebook book;
    

    i = 0;
    while(1)
    {
        std::cout << "command: ";
        std::getline (std::cin,command);

        if(std::cin.eof())
            return 1;
        if(command == "ADD")
        {
            book.add_contact(i);
            i++;
        }
        else if(command == "SEARCH")
        {
            book.search_contact(i);
        }

        else if(command == "EXIT")
            return 0;
        else
            std::cout<< "enter a valid command {ADD, SEARCH, EXIT}"<<std::endl;
    }
}




