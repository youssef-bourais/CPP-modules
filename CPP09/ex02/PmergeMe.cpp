/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:29:11 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/12 01:22:45 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>

void merge(int arr1[], int arr2[], int arr[], int size)
{
    int i = 0;
    int l = 0;
    int r = 0;
    while (l < (size/2) && r < (size - (size / 2))) 
    {
        if(arr1[l] < arr2[r])
        {
            arr[i] = arr1[l];
            l++;
        }
        else 
        {
            arr[i] = arr2[r];
            r++;
        }
        i++;
    }
    while (l < size/2) 
    {
        arr[i] = arr1[l];
        i++;
        l++;
    }
    while (r < size - (size / 2)) 
    {
        arr[i] = arr2[r];
        i++;
        r++;
    }

}

void mergesort(int arr[], int size)
{
    int i;
      
    if(size <= 1)
        return;
    
    int midle = 0;
    midle = size/2;
    int arr1[midle];
    int arr2[size - midle];
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
    mergesort(arr1, midle);
    mergesort(arr2, size - midle);
    merge(arr1, arr2, arr, size);
}


int main()
{
    int arr[] = {100, -1337, 10, 5, 33, 97, 8, 10, 22, -4, -3000};
    int size = 11;

    int i = 0;
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i]<<" ";
    }
    std::cout<<std::endl;
    mergesort(arr, size);    
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i]<<" ";
    }
    std::cout<<std::endl;
}
