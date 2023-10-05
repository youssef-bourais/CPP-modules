/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:54:34 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 11:00:16 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


void Zombie::announce()
{
    std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie()
{
    std::cout<<"init zombie "<<std::endl;
}

Zombie::Zombie(std::string name):_name(name)
{}

