/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:49:32 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/07 23:39:02 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

int main()
{
    Fixed a;
    Fixed const e(3.4f);

    std::cout<<std::fixed << std::setprecision(1)  << e.toFloat()<<std::endl;

}
