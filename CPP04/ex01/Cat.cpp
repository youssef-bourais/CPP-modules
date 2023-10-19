/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:02:13 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"


Cat::Cat()
{
    this->cat_brain = new Brain();
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
        type = s.type;
        delete cat_brain;
        cat_brain = new Brain;
        *cat_brain = *s.cat_brain; 
    }
    return *this;
}

Cat::Cat(Cat const &src)
{
    std::cout<< "copy constructor Cat called"<<std::endl;
    type = src.type;
    cat_brain = new Brain; 
    *cat_brain = *src.cat_brain; 
}


void Cat::seter(std::string str, int i)
{
    if(i >= 0 && i < 100)
        this->cat_brain->set(str, i);
}


std::string Cat::geter(int i)
{
    if(i >= 0 && i < 100)
        return cat_brain->get(i);
    return "NULL";
}















