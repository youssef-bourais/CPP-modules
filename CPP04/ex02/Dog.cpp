/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:07:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:14:41 by ybourais         ###   ########.fr       */
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

Dog::Dog(Dog const &src)
{
    std::cout<< "copy constructor for Cat called"<<std::endl;
    type = src.type;
    dog_brain = new Brain; 
    *dog_brain = *src.dog_brain; 
}

Dog &Dog::operator=(Dog const &s)
{
    if(this != &s)
    {      
        type = s.type;
        delete dog_brain;
        dog_brain = new Brain;
        *dog_brain = *s.dog_brain; 
    }
    return *this;
}


void Dog::makeSound() const
{
    std::cout<< "barke"<<std::endl;
}


void Dog::seter(std::string str, int i)
{
    if(i >= 0 && i < 100)
        this->dog_brain->set(str, i);
}


std::string Dog::geter(int i)
{
    if(i >= 0 && i < 100)
        return dog_brain->get(i);
    return "NULL";
}



