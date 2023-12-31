/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:51 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 07:53:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name): ScavTrap(name)
{
    std::cout<< "constructor called for 2 derived class"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<< "deconstructor called for 2 derived class"<<std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap requests a high five!" << std::endl;
}
