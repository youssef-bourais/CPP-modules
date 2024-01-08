/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:23:34 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 08:05:56 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int ac, char* av[]) 
{
    if (ac != 2) 
    {
        std::cout << "Error: Please Provide Valid argument" << std::endl;
        return 0;
    }
    if (!CalculateRPN(av[1])) 
        return 1;
    return 0;
}



