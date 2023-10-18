/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:50 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 08:45:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "Animal";
    std::cout<< "contructor for animal called"<<std::endl;
}

Animal::~Animal()
{
    std::cout<< "deconstructor for animal called"<<std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout<< "copy constructor for animal called"<<std::endl;
    this->type = src.getType();
}

Animal & Animal::operator=(Animal const &s)
{
    if(this != &s)
        this->type = s.type; 
    return *this;
}

void Animal::makeSound() const
{
    std::cout<< "some voice"<<std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}


void Animal::setType(std::string type)
{
    this->type = type;
}






