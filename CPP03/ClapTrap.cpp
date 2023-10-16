/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:50:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 09:51:52 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name):_name(name)
{
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


