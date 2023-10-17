/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 00:27:47 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout<< "constructor for cat called"<<std::endl;
}


Cat::~Cat()
{
    std::cout<< "deconstructor for cat called"<<std::endl;
}

void Cat::makeSound()
{
    std::cout<< "meow"<<std::endl;
}
