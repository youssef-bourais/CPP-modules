/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:29:11 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/11 03:45:52 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void mergesort(int *arr, int size)
{
    int i = 0;
    /* std::cout << "\narr = "; */
    /* while (i < size)  */
    /* { */
    /*     std::cout << arr[i++]<<" "; */
    /* } */

    i = 0;
    if(size <= 1)
    {
        std::cout << arr[0]<<"\n";
        return;
    }
    
    int midle = size/2;
    int arr1[midle];
    int arr2[midle];
    i = 0;
    int j = 0;
    int k = 0;
    while (i < size) 
    {
        if(i < midle)
            arr1[j++] = arr[i];
        else
            arr2[k++] = arr[i];
        i++;
    }
    mergesort(arr1, size/2);
    mergesort(arr2, size/2);
    i = 0;
    std::cout << "arr1 = ";
    while (i < midle) 
    {
        std::cout << arr1[i++]<<" ";
    }
    i = 0;
    std::cout << "\narr2 = ";
    while (i < midle) 
    {
        std::cout << arr2[i++]<<" ";
    }
    std::cout << "\n";
}


int main()
{
    int arr[10] = {88, 1337, -4, 5, 97, 8, 1, 100};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, size);
    for (int i = 0; i < size; i++) 
    {
        /* std::cout << arr[i]<<" "; */
    }
    /* std::cout<<std::endl; */
}
