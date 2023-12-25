/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:29:42 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/25 22:43:05 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include<iostream>

int main(int __attribute__((unused)) ac, char *av[])
{
    ScalarConverte::convert(av[1]);
    return(0);
}

