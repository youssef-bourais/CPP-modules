/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:30:11 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 03:22:42 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

#include <sstream> //istringstream
#include <iomanip> // setpresicion 


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

void print_error(bool inf)
{
    std::string str;
    
    str = "impossible";
    std::cout<< "char: "<<str<<std::endl;
    std::cout<< "int: "<<str<<std::endl;
    std::cout<< "float: "<<str<<std::endl;
    if(inf)
        str = "inf";
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
        
    if(nbr <= INT_MAX && nbr >= INT_MIN)
        std::cout<<"int: "<<intvar<<std::endl;
    else
    {
        std::cout<<"int: impossible"<<std::endl;
    }
}





int calculate_presicion(int len, double nbr)
{
    int holder = static_cast<long>(nbr);
    int i = 0;
    while(holder != 0)
    {
       holder = holder/10; 
       i++;
    }
    return (len - i); 
}

void print_float(double nbr, int len, bool with_dot)
{

    float floatvar;
    floatvar = static_cast<float>(nbr);

    if(nbr > std::numeric_limits<float>::max()) 
        std::cout<< "float: inff"<<std::endl;
    else if(nbr < -std::numeric_limits<float>::max())
        std::cout<< "float: -inff"<<std::endl;
    else if (!with_dot)
        std::cout<< "float: "<<std::fixed<<std::setprecision(1)<<floatvar<<"f"<<std::endl;
    else
        std::cout<<"float: "<<std::fixed<<std::setprecision(calculate_presicion(len, nbr))<<floatvar<<"f"<<std::endl;
}

void print_double(double nbr, int len, bool with_dot)
{    

    if (!with_dot && nbr == nbr)
        std::cout<< "double: "<<std::fixed<<std::setprecision(1)<<nbr<<std::endl;
    else
        std::cout<<"double: "<<std::fixed<<std::setprecision(calculate_presicion(len, nbr))<<nbr<<std::endl;
}

void print_result(double nbr, std::string str)
{ 
    bool with_dot = str.find(".") != SIZE_T_MAX;
    print_char(nbr);
    print_int(nbr); 
    print_float(nbr, str.length(), with_dot);
    print_double(nbr, str.length(), with_dot);
}

void ScalarConverte::convert(std::string str)
{
    bool inf = false;
    double holder;
    if(!is_number(str, &holder))
    {
        if(std::numeric_limits<double>::infinity() == holder)
            inf = true;
        print_error(inf); 
    }
    else
    {
        print_result(holder, str); 
    }
}

