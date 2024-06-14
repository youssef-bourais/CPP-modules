/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:50:36 by ybourais          #+#    #+#             */
/*   Updated: 2024/04/23 17:35:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name):_name(name)
{
     
    this->_Hit_points = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::~ClapTrap()
{ 
    std::cout<<"Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &s)
{ 
    std::cout<<"Copy assignment operator calle"<<std::endl;
    if(this != &s)
    {

        this->_name = s._name;
        this->_Hit_points = s._Hit_points;
        this->_Energy_points = s._Energy_points;
        this->_Attack_damage = s._Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(_Energy_points > 0 && _Hit_points > 0)
    {
        std::cout <<"ClapTrap "<<this->_name<<" attack "<<target<<", causing "<< this->_Attack_damage<<" points of damage!"<<std::endl;
        this->_Hit_points--;
        this->_Energy_points--;
    }
    else
    {
        std::cout<<_name<< "claptrap can't attack, Energy point: "<<_Energy_points<< " Hit points: "<<_Hit_points<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_Energy_points > 0 && _Hit_points > 0)
    {
        std::cout<<_name<< " repaired, adding "<<amount<<" to hit point"<<std::endl;
        _Hit_points += amount;
        _Energy_points--;
    }
    else
    {
        std::cout<<_name<< " can't be repaired, Energy point: "<<_Energy_points<< " Hit points: "<<_Hit_points<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
        std::cout <<this->_name<<" get dammaged, losing "<<amount<<" hit point!"<<std::endl;
        this->_Hit_points -= amount;
}

