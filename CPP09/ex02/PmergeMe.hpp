/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:28:20 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/14 07:47:46 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>

#define MICROSECONDS 1000000LL
#define YELLOW_TEXT "\033[1;33m"
#define GREEN_TEXT "\033[1;32m"

template <typename T>
void PrintSequence(const T &container, std::string a)
{
    std::cout<<std::endl;
    typename T::const_iterator it = container.begin();

    std::cout << YELLOW_TEXT;
    std::cout<< a<<": ";

    while (it != container.end())
    {
        std::cout << *it;
        it++;
        if(it != container.end())
           std::cout<<", ";
    }
    std::cout << GREEN_TEXT;
    /* std::cout << "}\n"; */
    std::cout << "\n";
}


#endif
