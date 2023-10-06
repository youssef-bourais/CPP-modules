/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:27:07 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/06 17:43:01 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():integer(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &s)
{
    if(this != &s)
        this->integer = s.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    return this->integer;
}

void Fixed::setRawBits(int const raw)
{
    this->integer = raw;
}

