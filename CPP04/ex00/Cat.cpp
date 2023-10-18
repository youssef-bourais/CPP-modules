/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 16:01:59 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout<< "constructor for cat called"<<std::endl;
}


Cat::~Cat()
{
    std::cout<< "deconstructor for cat called"<<std::endl;
}

Cat &Cat::operator=(Cat const &s)
{
    if(this != &s)
    {  
        type = s.type;
    }
    return *this;
}

Cat::Cat(Cat const &src)
{
    std::cout<< "copy constructor Cat called"<<std::endl;
    type = src.type;
}


void Cat::makeSound() const
{
    std::cout<< "meow"<<std::endl;
}
