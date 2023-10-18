/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:07:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 08:39:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    std::cout<< "constructor for dog called"<<std::endl;
}

Dog::~Dog()
{
    std::cout<< "deconstructor for dog called"<<std::endl;
}

void Dog::makeSound() const
{
    std::cout<< "barke"<<std::endl;
}
