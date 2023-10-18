/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:07:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 14:23:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->dog_brain = new Brain;
    this->type = "Dog";
    std::cout<< "constructor for dog called"<<std::endl;
}

Dog::~Dog()
{
    delete dog_brain;
    std::cout<< "deconstructor for dog called"<<std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &src)
		this->type = src.type;
}


void Dog::makeSound() const
{
    std::cout<< "barke"<<std::endl;
}

Dog &Dog::operator=(Dog const &s)
{
    if(this != &s)
    {      
        dog_brain = new Brain;
        *dog_brain = *s.dog_brain; 
    }
    return *this;
}


