/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 04:00:01 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/28 05:47:28 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename T>
void swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


template <typename T> 
T max(const T &a, const T &b)
{
    if(a > b)
        return a;
    else
        return b;
}

template <typename T>
T min(const T &a, const T &b)
{
    if(a < b)
    {
        return a;
    }
    else
        return b;
}


#endif


