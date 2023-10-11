/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:27:07 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/11 09:58:26 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::bits = 8;

Fixed::Fixed():integer(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{ 
    std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &s)
{ 
    std::cout<<"Copy assignment operator calle"<<std::endl;
    if(this != &s)
        this->integer = s.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->integer;
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->integer = raw;
}

