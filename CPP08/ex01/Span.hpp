/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:20:59 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/03 03:05:40 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> data;
        unsigned int N;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &src);
        ~Span();

};

Span::Span() : N(0)
{
}

Span::Span(unsigned int N)
{
    this->N = N;
    data.reserve(N);
}

Span::Span(const Span &copy) : Span(copy.N)
{
    this->N = copy.N;
    
    this->data = {copy.data.begin(), copy.data.end()};
    std::copy(copy.data.begin(), copy.data.end(), this->data.begin());
    this->data = copy.data;
    std::vector<int> data2(copy.data);
    data.assign(copy.data.begin(), copy.data.end());

}

Span &Span::operator=(const Span &src)
{
    if(this != &src)
    {
        this->N = src.N;
    }
    return *this;
}

#endif


