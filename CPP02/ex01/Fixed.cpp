/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:58:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/07 23:36:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed():integer(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{ 
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits() const
{
    std::cout<< "geter function called"<<std::endl;
    return this->integer;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "seter function called"<<std::endl;
    this->integer = raw;
}


Fixed &Fixed::operator=(Fixed const &src)
{
    std::cout << "copy assignment operator called"<<std::endl;
    if (this != &src)
         this->integer = src.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = src;
    //this->integer = src.integer;
}

Fixed::Fixed(const int integer)
{
    std::cout<< "Int constructor called"<<std::endl;
    this->integer = integer;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called"<<std::endl;
    integer = nbr;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(integer);
}

