/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:21:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 15:50:37 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
    std::cout<<"constructor for Character called"<<std::endl;
}

Character::~Character()
{
    std::cout<< "deconstructor for Character called"<<std::endl;
}

Character::Character(std::string const &name)
{
    this->name = name;
    std::cout<< "condtructor for setting type of Character called"<<std::endl;
}

std::string const &Character::getName() const
{
   return this->name; 
}

Character::Character(Character const &src)
{
    std::cout<< "copy constructor for AMateria called"<<std::endl;
    this->name = src.name;
}


Character &Character::operator=(Character const &s)
{
    if(this != &s)
        this->name = s.name; 
    return *this;
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}
        
void Character::use(int idx, ICharacter& target)
{

}



