/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:49:32 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/11 14:21:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

int main()
{
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);
    a = Fixed(1234.4321f);


    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as int" << std::endl;
    std::cout << "b is " << b.toInt() << " as int" << std::endl;
    std::cout << "c is " << c.toInt() << " as int" << std::endl;
    std::cout << "d is " << d.toInt() << " as int" << std::endl;
}

