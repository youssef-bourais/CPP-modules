/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:54 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 18:22:12 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
    std::cout<<"constructor for AMateria called"<<std::endl;
}

AMateria::~AMateria()
{
    std::cout<< "deconstructor for AMateria called"<<std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout<< "condtructor for setting type of AMateria called"<<std::endl;
}

std::string const &AMateria::getType() const
{
   return this->type; 
}

AMateria::AMateria(AMateria const &src)
{
    std::cout<< "copy constructor for AMateria called"<<std::endl;
    this->type = src.type;
}


AMateria &AMateria::operator=(AMateria const &s)
{
    if(this != &s)
        this->type = s.type; 
    return *this;
}

void AMateria::use(ICharacter &target)
{

}



