/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:58:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/11 14:23:15 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



const int Fixed::bits = 8;

Fixed::Fixed():Fixed_pt_value(0)
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
    return this->Fixed_pt_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "seter function called"<<std::endl;
    this->Fixed_pt_value = raw;
}

Fixed &Fixed::operator=(Fixed const &src)
{
    std::cout << "copy assignment operator called"<<std::endl;
    if (this != &src)
    {
         this->Fixed_pt_value = src.getRawBits();
    }
    return *this;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = src;
}

Fixed::Fixed(const int nbr)
{
    std::cout<< "Int constructor called"<<std::endl;
    this->Fixed_pt_value = nbr << this->bits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called"<<std::endl;
    Fixed_pt_value = roundf(nbr*(1 << bits));    
}

float Fixed::toFloat(void) const
{
    return (float(this->Fixed_pt_value)/float(1 << this->bits));
}


int Fixed::toInt(void) const
{
    return (this->Fixed_pt_value >> bits);
}


std::ostream &operator<<(std::ostream &os, const Fixed &Fixed)
{

    std::cout<<Fixed.toFloat();
    return os;
}



