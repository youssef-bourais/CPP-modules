/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:43:26 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/11 17:51:38 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int Fixed_pt_value;
        static const int bits;
    public:
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        bool operator<(Fixed const &arg) const;
        bool operator>(Fixed const &arg) const;
        bool operator<=(Fixed const &arg) const;
        bool operator>=(Fixed const &arg) const;
        bool operator==(Fixed const &arg) const;
        bool operator!=(Fixed const &arg) const;
        Fixed operator+(Fixed const &rclass) const;
        Fixed operator-(Fixed const &rclass) const;
        Fixed operator*(Fixed const &rclass) const;
        Fixed operator/(Fixed const &rclass) const;
        Fixed &operator--();
        Fixed &operator++();
        Fixed operator--(int);
        Fixed operator++(int);

};

std::ostream &operator<<(std::ostream &os, const Fixed &Fixed);

#endif


