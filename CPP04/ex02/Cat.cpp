/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:08:15 by ybourais         ###   ########.fr       */
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

void Cat::set(std::string str)
{
    this->cat_brain[0].set_first_index(str);
}


std::string Cat::geter()
{
    return cat_brain[0].get_first_index();
}















