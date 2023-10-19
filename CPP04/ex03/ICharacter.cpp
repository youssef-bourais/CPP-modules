/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:55 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 10:40:12 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    _name = "null";
    std::cout<< "default constructor for ICharacter called"<<std::endl;
}

ICharacter::ICharacter(std::string name):_name(name)
{
    std::cout<< "default constructor for ICharacter called"<<std::endl;
}

ICharacter::~ICharacter()
{
    std::cout<< "deconstructor for ICharacter called"<<std::endl;
}

ICharacter::ICharacter(ICharacter const &src)
{
    std::cout<< "copy constructor for ICharacter called"<<std::endl;
    *this = src;
}


ICharacter &ICharacter::operator=(ICharacter const &s)
{
    if(this != &s)
        *this = s; 
    return *this;
}


