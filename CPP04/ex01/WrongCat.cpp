/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:31:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:49:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "wrong-Cat";
    std::cout<< "constructor for wrong-cat called"<<std::endl;
}


WrongCat::~WrongCat()
{
    std::cout<< "deconstructor for wrong-cat called"<<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<< "wrong meow"<<std::endl;
}
