/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:29:11 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/12 05:47:46 by ybourais         ###   ########.fr       */
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

void MergeSort(int arr[], int size)
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
    MergeSort(arr1, midle);
    MergeSort(arr2, size - midle);
    merge(arr1, arr2, arr, size);
}

void InsertionSort(int arr[], int size)
{
    for (int i = 0 ;i < size; i++) 
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}

/**/
/* int main() */
/* { */
/*     int arr[] = {100, -1337, 10, 5, 33, 97, 8, 10, 22, -4, -3000}; */
/*     int size = 11; */
/**/
/*     int i = 0; */
/*     for (int i = 0; i < size; i++)  */
/*     { */
/*         std::cout << arr[i]<<" "; */
/*     } */
/*     std::cout<<std::endl; */
/*     MergeSort(arr, size);     */
/**/
/*     InsertionSort(arr, size); */
/*     for (int i = 0; i < size; i++)  */
/*     { */
/*         std::cout << arr[i]<<" "; */
/*     } */
/*     std::cout<<std::endl; */
/* } */
/**/
/**/


