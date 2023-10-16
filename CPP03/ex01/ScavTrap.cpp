/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:14:04 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 16:11:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string &name): ClapTrap(name)
{
    std::cout<< "constructor called for derived class"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "deconstructor called for derived class"<<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout<<"derived class attack"<<std::endl;
    ClapTrap::attack(target);
}



