/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 05:43:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/29 05:22:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
    try 
    {
        // Test default construction
        Array<int> empty_array;
        std::cout << "Default-constructed array size: " << empty_array.size() << std::endl;

        // Test construction with a specified size
        Array<int> int_array(5);
        std::cout << "Array size: " << int_array.size() << std::endl;

        // Test subscript operator and size function
        for (unsigned int i = 0; i < int_array.size(); i++) 
        {
            int_array[i] = i * 2;
            std::cout << "Element at index " << i << ": " << int_array[i] << std::endl;
        }

        // Test copy construction
        Array<int> copied_array(int_array);
        std::cout << "Copied array size: " << copied_array.size() << std::endl;

        // Test assignment operator
        Array<int> assigned_array = int_array;
        std::cout << "Assigned array size: " << assigned_array.size() << std::endl;

        // Test modification after copy and assignment
        int_array[0] = 999;  // Modify original array
        std::cout << "Original array element at index 0: " << int_array[0] << std::endl;

        // Test out-of-bounds access
        try 
        {
            int_array[int_array.size()] = 42;  // Should throw an exception
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Exception caught 2: " << e.what() << std::endl;
        }

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught 1: " << e.what() << std::endl;
    }
    while(1);
    return 0;
}

