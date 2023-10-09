/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:58:57 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/07 18:59:20 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int integer;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
};





#endif

