/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:38:09 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:49:40 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongDog.hpp"


WrongDog::WrongDog()
{
    this->type = "wrong-Dog";
    std::cout<< "constructor for wrong-dog called"<<std::endl;
}

WrongDog::~WrongDog()
{
    std::cout<< "deconstructor for wrong-dog called"<<std::endl;
}

void WrongDog::makeSound() const
{
    std::cout<< "wrong barke"<<std::endl;
}
