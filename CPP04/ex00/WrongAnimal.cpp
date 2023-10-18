/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:27:21 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 16:07:33 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    this->type = "Wrong-Animal";
    std::cout<< "contructor for wrong-animal called"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "deconstructor for wrong-animal called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout<< "copy constructor for wrong-animal called"<<std::endl;
    this->type = src.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &s)
{
    if(this != &s)
        this->type = s.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout<< "some wrong voice"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}


