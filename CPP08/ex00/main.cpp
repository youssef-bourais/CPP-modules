/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:29:59 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/03 01:19:27 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    int arr[] = {2,4,4,5,6,8};
    std::vector<int> vector(arr, arr + sizeof(arr)/sizeof(arr[0]));
    try
    {
       std::vector<int>::const_iterator result = easyfind(vector, 2);
       std::cout<<*result<<std::endl;
    }
    catch(std::exception &e)
    {
       std::cout<< e.what()<<std::endl;
    }
}

