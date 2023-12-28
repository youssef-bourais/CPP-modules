/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 03:59:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/28 04:17:15 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
void swap(T a, T b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


template <typename T> 
T max(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}

template <typename T>
T min(T a, T b)
{
    if(a < b)
    {
        return a;
    }
    else
        return b;
}
