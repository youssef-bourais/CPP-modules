/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:57 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/03 08:14:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>


int main()
{
    Span A(50);
    Span B(100);

    try
    {
        A.addNumber(-80);
        A.addNumber(0);
        A.addNumber(80);
        A.addNumber(-8);
        A.addNumber(8);
        A.addNumber(88);
        try
        {
            std::cout<<"vector A: ";
            A.print();
            std::cout << "longest distance in the SpaN A : "<<A.longestSpan()<<'\n';
            std::cout << "shortest distance in the SpaN A : "<<A.shortestSpan()<<'\n';
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
    try
    {
        int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        std::vector<int>  tmp(arr, arr + sizeof(arr)/sizeof(arr[0]));
        B.CreatRang(tmp.begin(), tmp.end()); 
        std::cout<<"vector B: ";
        B.print();
        A.CreatRang(tmp.begin(), tmp.end());
        std::cout<< "new vector A: ";
        A.print();
    }
    catch(std::exception &e)
    {
        std::cout<<"Span is Full:"<<'\n';
    }
}

