/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 08:22:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "Cat.hpp"


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

Cat &Cat::operator=(Animal const &s)
{
    if(this != &s)
        *this = s;
    this->cat_brain = new Brain;
    Brain::operator=(s);
    return *this;
}


Cat &Cat::operator=(Cat const &s)
{
    if(this != &s)
        *this = s;
    return *this;
}


