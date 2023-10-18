/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:14:04 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 07:51:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout<< "constructor called for derived class"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "deconstructor called for derived class"<<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(_Energy_points > 0 && _Hit_points > 0)
    {
        std::cout <<"ScavTrap "<<this->_name<<" attack "<<target<<", causing "<< this->_Attack_damage<<" points of damage!"<<std::endl;
        this->_Hit_points--;
        this->_Energy_points--;
    }
    else
    {
        std::cout<<_name<< "ScavTrapcan't attack, Energy point: "<<_Energy_points<< " Hit points: "<<_Hit_points<<std::endl;
    }

}

void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap is now in Gate keeper mode"<<std::endl;
}

