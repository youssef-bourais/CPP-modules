/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:28:04 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 15:26:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string na, Weapon &we) : name(na), _Weapon(we)
{
}


void HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<< _Weapon.getType()<<std::endl;
}


