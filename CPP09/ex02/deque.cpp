/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:45 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/16 01:38:57 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::deque<std::deque<int> > DevideAndSortPairsRecursively(std::deque<int>::const_iterator  VBeging, std::deque<int>::const_iterator VEnd)
{
    std::deque<int> pairs;
    std::deque<std::deque<int> > mainOne;

    std::deque<int>::const_iterator tmp = VBeging;
    int i = 0;
    while(i < 2 && tmp != VEnd)
    {
        pairs.push_back(*tmp); 
        tmp++;
        i++;
    }
    /* SwapElement(pairs); */
    mainOne.push_back(pairs);
    if(VBeging != VEnd) 
    {
        if(VBeging + 2 < VEnd) 
        {
            std::deque<std::deque<int> > result = DevideAndSortPairsRecursively(VBeging + 2, VEnd);
            mainOne.insert(mainOne.end(), result.begin(), result.end());
        }
    }
    /* mergesort(mainOne); */
    return mainOne;
}

void MergeInsertSortDeque(std::deque<int> &DataDeque)
{    
    int holder = 0;
    std::deque<std::deque<int> > result;

    if(DataDeque.size() % 2 != 0)
        holder = DataDeque.back(); 

    result = DevideAndSortPairsRecursively(DataDeque.begin(), DataDeque.end());

    PrintMainContainer(result);
    while(1);
    DataDeque.clear();
    InsertingElement(DataDeque, result, holder);
}




