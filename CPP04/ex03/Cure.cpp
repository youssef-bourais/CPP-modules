/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:41:24 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 10:41:52 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout<< "default constructor for Cure called"<<std::endl;
}

Cure::~Cure()
{
    std::cout<< "deconstructor for Cure called"<<std::endl;
}

Cure::Cure(Cure const &src)
{
    std::cout<< "copy constructor for AMateria called"<<std::endl;
    this->type = src.type;
}


Cure &Cure::operator=(Cure const &s)
{
    if(this != &s)
        this->type = s.type; 
    return *this;
}



AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout<< "* shoots an ice bolt at "<< target.getName()<<" *"<<std::endl;
}

