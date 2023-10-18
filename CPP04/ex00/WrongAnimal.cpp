/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:27:21 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:29:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout<< "contructor for animal called"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "deconstructor for animal called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &s)
{
    if(this != &s)
    {

    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout<< "some voice"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}


