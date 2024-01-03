/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:57 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/03 06:49:37 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span A(10);

    try
    {
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        A.addNumber(-80);
        try
        {
            A.shortestSpan();
            std::cout << "longest distance in the SpaN: "<<A.longestSpan()<<'\n';
            std::cout << "shortest distance in the SpaN: "<<A.shortestSpan()<<'\n';
        }
        catch(std::exception &e)
        {
            std::cout<<"Span have one element or less"<<'\n';
        }
    }
    catch(std::exception &e)
    {
        std::cout<<"Span is Full"<<'\n';
    }


}
