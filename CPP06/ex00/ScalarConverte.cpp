/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:30:11 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/23 07:00:37 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte()
{
    std::cout<< "default constructor called"<<std::endl;
}

ScalarConverte::~ScalarConverte()
{
    std::cout<< "deconstracter called"<< std::endl;
}

int is_number(const std::string& s)
{  
    /* size_t pos;  // This will store the position of the first unconverted character */
    
    /* try */
    /* { */
    /*     std::stol(s, &pos, 0); */
    /*     std::cout<< pos<<std::endl; */
    /* } */
    /* catch(std::exception &e) */
    /* { */
    /*     std::cout<< pos<<std::endl; */
    /*     return 0; */
    /* } */
    /* if (pos == s.length())  */
    /* { */
    /*     return 1; */
    /* }  */
    /* return 0;      */
    try 
    {
        // string -> integer
        /* int i = std::stoi(s); */

        // string -> float
        float f = std::stof(s);

        std::cout<< f<<std::endl;
        // string -> double 
        /* double d = std::stod(s); */
    } 
    catch (std::exception &e) 
    {
        printf("\n");
        return 0;
    } 
    return 1;
}

void print_char(std::string str)
{
    std::cout<< "char: "<<str<<std::endl;
    std::cout<< "int: "<<str<<std::endl;
    std::cout<< "float: "<<str<<std::endl;
    std::cout<< "double: "<<str<<std::endl;
}


void ScalarConverte::convert(std::string str)
{
    std::cout<< str<<std::endl;
    if(is_number(str))
    {
        std::cout<< "yes"<<std::endl;
    }
    else
    {
        std::cout<< "no"<<std::endl;
    }
}

