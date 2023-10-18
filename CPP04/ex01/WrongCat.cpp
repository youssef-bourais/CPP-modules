/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:31:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 16:16:16 by ybourais         ###   ########.fr       */
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

WrongCat &WrongCat::operator=(WrongCat const &s)
{
    if(this != &s)
    {  
        type = s.type;
    }
    return *this;
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout<< "copy constructor WrongCat called"<<std::endl;
    type = src.type;
}



void WrongCat::makeSound() const
{
    std::cout<< "wrong meow"<<std::endl;
}
