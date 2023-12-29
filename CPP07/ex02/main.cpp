/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 05:43:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/29 02:57:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

int main() 
{
    try 
    {
        // Test default construction
        Array<int> emptyArray;
        std::cout << "Default-constructed array size: " << emptyArray.size() << std::endl;

        // Test construction with a specified size
        Array<int> intArray(5);
        std::cout << "Array size after construction: " << intArray.size() << std::endl;

        // Test subscript operator and size function
        for (unsigned int i = 0; i < intArray.size(); ++i) 
        {
            intArray[i] = i * 2;
            std::cout << "Element at index " << i << ": " << intArray[i] << std::endl;
        }

        // Test copy construction
        Array<int> copiedArray(intArray);
        std::cout << "Copied array size: " << copiedArray.size() << std::endl;

        // Test assignment operator
        Array<int> assignedArray = intArray;
        std::cout << "Assigned array size: " << assignedArray.size() << std::endl;

        // Test modification after copy and assignment
        intArray[0] = 999;  // Modify original array
        std::cout << "Original array element at index 0: " << intArray[0] << std::endl;
        std::cout << "Copied array element at index 0: " << copiedArray[0] << std::endl;

        // Test out-of-bounds access
        try 
        {
            intArray[intArray.size()] = 42;  // Should throw an exception
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

