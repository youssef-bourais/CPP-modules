/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 08:15:42 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/04 00:59:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &src);
        
        typename std::stack<T>::container_type::iterator end();
        typename std::stack<T>::container_type::iterator begin();

};

template <typename T>
MutantStack<T>::MutantStack() 
{
}


template <typename T>
MutantStack<T>::~MutantStack() 
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
    *this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
    if(this != &src)
    {
        while (!this->empty()) 
            this->pop();
       this->c = src.c; 
    }
    return *this;
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
    return (this->c.end());
}


#endif

