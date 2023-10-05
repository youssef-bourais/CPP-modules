/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:29:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 15:20:52 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string na) : name(na)
{
}


void HumanB::setWeapon(Weapon &w)
{
    _Weapon = &w;
}

void HumanB::attack()
{
    std::cout<<this->name<<" attacks with their "<< _Weapon->getType()<<std::endl;
}


