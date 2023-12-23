/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:29:42 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/23 06:57:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"


#include <iostream>
#include <string>
#include <sstream>

double hexStringToDouble(const std::string& hexStr) 
{
    std::istringstream iss(hexStr);
    double result;
    iss >> std::hex >> result;
    return result;
}
        

#include <iostream>
#include <limits>

int main() {
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << std::endl;

    return 0;
}
/**/
/* int main(int argc, char *argv[]) */
/* { */
/*     if(argc != 2) */
/*         std::cout<<"wrong number of argument"<<std::endl; */
/*     else */
/*     { */
/*         ScalarConverte::convert(argv[1]); */
/*         * std::cout<<hexStringToDouble(argv[1])<<std::endl; */ 
/*     } */
/* } */
/**/
