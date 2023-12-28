/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 05:06:36 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/28 05:48:59 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    //Test with an array of integers
    int intarray[] = {1, 2, 3, 4, 5};
    size_t intarrayLength = sizeof(intarray) / sizeof(int);

    std::cout << "iterating over integers: ";
    iter(intarray, intarrayLength, printvalue<int>);
    std::cout << std::endl;

    //with an array of doubles
    double doublearray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doublearray) / sizeof(double);

    std::cout << "iterating over doubles: ";
    iter(doublearray, doubleArrayLength, printvalue<double>);
    std::cout << std::endl;

    // with an array of strings
    std::string stringarray[] = {"tnin", "tlat", "larba3"};
    size_t stringarrayLength = sizeof(stringarray) / sizeof(std::string);

    std::cout << "iterating over strings: ";
    iter(stringarray, stringarrayLength, printvalue<std::string>);
    std::cout << std::endl;

    return 0;

}
