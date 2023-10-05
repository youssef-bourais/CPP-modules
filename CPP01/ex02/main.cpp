/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:56:33 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 10:19:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;


    std::cout<< "The memory address of the string variable :" << &str <<std::endl;
    std::cout<< "The memory address held by stringPTR :" << stringPTR <<std::endl;
    std::cout<< "The memory address held by stringREF :" << &stringREF <<std::endl;

    
    std::cout<< "The value of the string variable :" << str <<std::endl;
    std::cout<< "The value pointed to by stringPTR :" << *stringPTR <<std::endl;
    std::cout<< "The value pointed to by stringREF :" << stringREF <<std::endl;

}
