/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:19:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/25 17:29:18 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

void phonebook::insert_contact(int i)
{
    std::string cmd;


    while(1)
    {
        std::cout<<"enter first name: ";
        std::getline (std::cin, cmd);
        if(cmd.empty())
            continue;
        break;
    }
    list[i].set_first_name(cmd); 

    while(1)
    {
        std::cout<<"enter last name: ";
        std::getline (std::cin, cmd);
        if(cmd.empty())
            continue;
        break;
    }
    list[i].set_last_name(cmd); 

    while(1)
    {
        std::cout<<"enter nick name: ";
        std::getline (std::cin, cmd);;
        if(cmd.empty())
            continue;
        break;
    }
    list[i].set_nick_name(cmd); 


    while(1)
    {
        std::cout<<"enter phone number: ";
        std::getline (std::cin, cmd);;
        if(cmd.empty())
            continue;
        break;
    }
    list[i].set_phone(cmd); 

    while(1)
    {
        std::cout<<"enter darkest secret: ";
        std::getline (std::cin, cmd);;
        if(cmd.empty())
            continue;
        break;
    }
    list[i].set_darkest_secret(cmd); 
    
}


void phonebook::add_contact(int index)
{
    int static old;

    if(index >= 8)
    {   
        insert_contact(old);
        old++;
        if(old == 7)
            old = 0;
        return;
    }
    insert_contact(index);
}


void phonebook::display_contact(int i) 
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  index   |first name|last name | nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    int j = 0;
    while (j < i && j < 8) 
    {
        std::cout << "|" << std::setw(10) << j;
        std::cout << "|" << std::setw(10) << truncat(list[j].get_first_name());
        std::cout << "|" << std::setw(10) << truncat(list[j].get_last_name());
        std::cout << "|" << std::setw(10) << truncat(list[j].get_nickname()) << "|" << std::endl;
        j++;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void phonebook::search_contact(int i)
{ 
    int index;
    std::string cmd;
    
    display_contact(i); 
    if(i == 0)
    {
        std::cout<<"phonebook still empty"<<std::endl;
        return;
    }
    while(1)
    {
        std::cout<<"enter a valid index: ";
        std::getline (std::cin, cmd);
        if(cmd.empty())
            continue;
        cmd[cmd.length()] = '\0';
        if(!is_number(cmd))
            continue;
        if (cmd.size() != 1)
            continue;
        index = atoi(cmd.c_str());
        if(index < i)
            break;
    }

    std::cout<<"first name      : "<<list[index].get_first_name()<<std::endl;
    std::cout<<"last name       : "<<list[index].get_last_name()<<std::endl;
    std::cout<<"nickname        : "<<list[index].get_nickname()<<std::endl;
    std::cout<<"phone number    : "<<list[index].get_phone()<<std::endl;
    std::cout<<"darkest secret  : "<<list[index].get_darkest_secret()<<std::endl; 
}

