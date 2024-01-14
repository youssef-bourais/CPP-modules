/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 02:41:16 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/13 16:05:19 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : N(0)
{
}

Span::~Span()
{
}

Span::Span(unsigned int N)
{
    this->N = N;
    data.reserve(N);
}

Span::Span(const Span &copy)
{
    this->N = copy.N;
    this->data = copy.data;
}

Span &Span::operator=(const Span &src)
{
    if(this != &src)
    {
        this->N = src.N;
        this->data = src.data;
    }
    return *this;
}

void Span::addNumber(int num)
{
    if(data.size() < N)
        data.push_back(num);
    else
        throw std::exception();
}


int Span::shortestSpan()
{
    int short_span;
    if(data.size() < 2)
        throw std::exception();
    else
    {
        std::vector<int> sortedArray = data;
        std::sort(sortedArray.begin(), sortedArray.end());
        short_span = sortedArray[1] - sortedArray[0];
        for(unsigned int i = 0;i < data.size() - 1;i++)
        {
            if(short_span > sortedArray[i + 1] - sortedArray[i])
                short_span = sortedArray[i + 1] - sortedArray[i];   
        }
    }
    return short_span;
}


int Span::longestSpan()
{ 
    int longestSpan;
    if(data.size() < 2)
        throw std::exception();
    else
    { 
        std::vector<int> sortedArray = data;
        std::sort(sortedArray.begin(), sortedArray.end());
        longestSpan = *(sortedArray.end() - 1) - *sortedArray.begin(); 
    }
    return longestSpan;
}

void Span::CreatRang(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(static_cast<size_t>(end - begin) > N - data.size())
    {
        throw std::exception();
    }
    data.insert(data.end(), begin, end);
}

void Span::print()
{
    std::vector<int>::iterator it = data.begin();
    while(it != data.end())
    {
        std::cout<<*it<< " ";
        it++;
    }
    std::cout<<std::endl;
}
