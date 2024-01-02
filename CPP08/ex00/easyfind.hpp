/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:59:07 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/02 04:28:06 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <list>
#include <vector>

template <typename T>
int easyfind(const T& container, int n)
{
    int size = sizeof(container);
    std::vector<int>::iterator it = container.begin();
    std::cout<< *it<<" hello"<<n << size<<std::endl;

    /* int *a = std::find(std::begin(container), std::end(container), n); */
    /* std::cout<< &(*a)<<std::endl;  */
    return 0;
}















#endif
