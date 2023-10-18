/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:50 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:59:04 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout<< "contructor for aanimal called"<<std::endl;
}

AAnimal::~AAnimal()
{
    std::cout<< "deconstructor for aanimal called"<<std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout<< "copy constructor for aanimal called"<<std::endl;
    this->type = src.getType();
}

AAnimal &AAnimal::operator=(AAnimal const &s)
{
    if(this != &s)
        this->type = s.type; 
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}


void AAnimal::setType(std::string type)
{
    this->type = type;
}






