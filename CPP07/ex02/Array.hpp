/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 05:44:06 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/29 02:55:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *data;
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> &copy);
        Array &operator=(Array<T> &src);
        T& operator[](unsigned int index); 
        
        unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
    this->data = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->data = new T[n];
}

template <typename T>
Array<T>::Array(Array <T> &copy)
{
    if(data != NULL)
        delete[] data;
    data = new T[copy.size()]; 
    for(int i = 0;i < copy.size();i++)
        data[i] = copy.data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &src)
{
    if(this != &src)
    {
        if(data != NULL)
            delete[] data;
        data = new T[src.size()];
        for(int i = 0;i < src.size();i++)
            data[i] = src.data[i];
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (sizeof(data )/sizeof(T));
}

template <typename T>
T &Array<T>::operator[](unsigned int index) 
{
        if (index >= size()) 
        {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
}



#endif
