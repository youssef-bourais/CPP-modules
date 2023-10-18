/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:31:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:37:17 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "Cat";
    std::cout<< "constructor for cat called"<<std::endl;
}


WrongCat::~WrongCat()
{
    std::cout<< "deconstructor for cat called"<<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<< "meow"<<std::endl;
}
