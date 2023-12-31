/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:50 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 12:59:22 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "Animal";
    std::cout<< "constructor for animal called"<<std::endl;
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

Animal &Animal::operator=(Animal const &s)
{
    if(this != &s)
        this->type = s.getType();
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


