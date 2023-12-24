/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:30:11 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/24 04:11:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include <cctype>
#include <iomanip>
#include <limits>

ScalarConverte::ScalarConverte()
{
    std::cout<< "default constructor called"<<std::endl;
}

ScalarConverte::~ScalarConverte()
{
    std::cout<< "deconstracter called"<< std::endl;
}

int is_number(const std::string s, double *holder)
{
    std::istringstream num(s);

    num >> *holder;

    if(!num.fail() && num.eof()) 
    {
        return 1;
    }
    return 0;
}

void print_error()
{
    std::string str;
    
    str = "impossible";
    std::cout<< "char: "<<str<<std::endl;
    std::cout<< "int: "<<str<<std::endl;
    std::cout<< "float: "<<str<<std::endl;
    std::cout<< "double: "<<str<<std::endl;
}

void print_char(double nbr)
{
    char charvar;
    bool char_in_range;
    
    char_in_range = nbr >= 0 && nbr < 128;
    charvar = static_cast<char>(nbr);
    if(!char_in_range)
    {
        std::cout<< "char: impossible"<<std::endl;
    }
    else if(isprint(static_cast<int>(nbr)))
    {
        std::cout<< "char: "<< charvar <<std::endl;
    }
    else
    {
        std::cout<< "char: no displayable"<<std::endl;
    }
}


void print_int(double nbr)
{
    int intvar;

    intvar = static_cast<int>(nbr);
    if(nbr == intvar)
    {
        std::cout<<"int: "<<intvar<<".0f"<<std::endl;
    }
    else
    {
        std::cout<<"int: "<<std::fixed<<std::setprecision(8)<<intvar<<"f"<<std::endl;
    }
}

void print_float(double nbr)
{

}

void print_double(double nbr)
{

}


void print_result(double nbr)
{
    print_char(nbr);
    print_int(nbr); 
    print_float(nbr);
    print_double(nbr);

    int intvar = static_cast<int>(nbr);
    float floatvar = static_cast<float>(nbr);
   
    std::cout<< "int: "<<intvar<<std::endl;
    std::cout<< "float: "<<floatvar<<std::endl;
    std::cout<< "double: "<<nbr<<nbr<<std::endl;
}

void ScalarConverte::convert(std::string str)
{
    double holder;
    if(!is_number(str, &holder))
    {
        print_error(); 
    }
    else
    {
        print_result(holder); 
    }
}

