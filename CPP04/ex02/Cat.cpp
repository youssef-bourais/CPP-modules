/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:37:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"


Cat::Cat()
{
    this->cat_brain = new Brain;
    this->type = "Cat";
    std::cout<< "constructor for cat called"<<std::endl;
}


Cat::~Cat()
{
    delete cat_brain;
    std::cout<< "deconstructor for cat called"<<std::endl;
}

void Cat::makeSound() const
{
    std::cout<< "meow"<<std::endl;
}

Cat &Cat::operator=(Cat const &s)
{
    if(this != &s)
    {        
        cat_brain = new Brain;
        *cat_brain = *s.cat_brain;    
    }
    return *this;
}

void Cat::seter(std::string str, int i)
{
    this->cat_brain[i].set(str, i);
}


std::string Cat::geter(int i)
{
    return cat_brain[i].get(i);
}















