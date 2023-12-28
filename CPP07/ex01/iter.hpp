/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 05:07:04 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/28 05:48:53 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Function>
void iter(T *array, int lenth, Function func)
{
    for(int i = 0;i < lenth; i++)
        func(array[i]);
}


template <typename T>
void printvalue(const T &element)
{
    std::cout<< element<<" ";
}



#endif

