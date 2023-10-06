/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:27:37 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/06 17:40:57 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int integer;
        static const int fractional_bits;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};





#endif
