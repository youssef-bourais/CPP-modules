/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:49:32 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/10 07:48:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>


int main()
{
    Fixed a(123);
    Fixed const e(3.4f);


    float nbr = a.toFloat();
    std::cout<<nbr<<std::endl;
}
