/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:45 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/15 06:54:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/**/
/* void merge(std::deque<std::deque<int> > &Vec1, std::deque<std::deque<int> > &Vec2, std::deque<std::deque<int> > &Vec) */
/* { */
/*     int i = 0; */
/*     int l = 0; */
/*     int r = 0; */
/*     int size = (int)Vec.size(); */
/*     while (l < size/2 && r < size - size/2)  */
/*     { */
/*         if(Vec1[l][0] < Vec2[r][0]) */
/*             Vec[i] = Vec1[l++]; */
/*         else */
/*             Vec[i] = Vec2[r++]; */
/*         i++; */
/*     } */
/*     while (l < size/2)  */
/*     { */
/*         Vec[i] = Vec1[l]; */
/*         i++; */
/*         l++; */
/*     }    */
/*     while (r < size - size/2)  */
/*     { */
/*         Vec[i] = Vec2[r]; */
/*         i++; */
/*         r++; */
/*     } */
/* } */
/**/

/* void mergesort(std::deque<std::deque<int> > &T) */
/* { */
/*     if(T.size() <= 1) */
/*         return ; */
/**/
/*     std::deque<std::deque<int> > vec1; */
/*     std::deque<std::deque<int> > vec2; */
/**/
/*     int midle = T.size()/2; */
/**/
/*     int i = 0; */
/*     while (i < (int)T.size())  */
/*     { */
/*         if(i < midle) */
/*             vec1.push_back(T[i]); */
/*         else  */
/*             vec2.push_back(T[i]); */
/*         i++; */
/*     } */
/*     mergesort(vec1); */
/*     mergesort(vec2); */
/*     merge(vec1, vec2, T);  */
/* } */

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
    SwapElement(pairs);
    mainOne.push_back(pairs);
    if(VBeging != VEnd) 
    {
        if(VBeging + 2 < VEnd) // 
        {
            std::deque<std::deque<int> > result = DevideAndSortPairsRecursively(VBeging + 2, VEnd);
            mainOne.insert(mainOne.end(), result.begin(), result.end());
        }
    }
    mergesort(mainOne);
    return mainOne;
}

/* int BinarySearch(std::deque<int> const &ARRAY, int Pivot) */
/* { */
/*     int low = 0; */
/*     int hight = ARRAY.size() - 1; */
/*     int midle = 0; */
/*     while (low <= hight)  */
/*     { */
/*         midle = (hight + low)/2; */
/*         if(low == hight) */
/*         { */
/*             if(ARRAY[midle] < Pivot) */
/*                 low = midle + 1; */
/*             break; */
/*         } */
/*         else if(ARRAY[midle] < Pivot)  */
/*             low = midle + 1;  */
/*         else  */
/*             hight = midle - 1; */
/*     } */
/*     return low; */
/* } */

/* void InsertPaindInMain(std::deque<int> &main, std::deque<std::deque<int> > &result) */
/* {     */
/*     int len;  */
/*     len = result.size() - 2; */
/*     int i = 0; */
/*     while (i < len)  */
/*     { */
/*         int var = result[i++][1]; */
/*         int IndexToInsert = BinarySearch(main, var); */
/*         main.insert(main.begin() + IndexToInsert, var); */
/*     }                                                               */
/* } */

/* void InsertingElement(std::deque<int> &main, std::deque<std::deque<int> > &result, int holder) */
/* { */
/*     int i = 0; */
/*     while(i < (int)result.size() - 1) */
/*         main.push_back(result[i++][0]); */
/**/
/*     if (!holder)  */
/*     { */
/*         main.push_back(result[i][0]); */
/*         main.push_back(result[i][1]); */
/*     } */
/*     else  */
/*     { */
/*         main.push_back(result[--i][1]); */
/*         int IndexToInsert = BinarySearch(main, holder); */
/*         main.insert(main.begin() + IndexToInsert, holder); */
/**/
/*     } */
/*     * PrintSequence(main, "after: "); */
/*     InsertPaindInMain(main, result); */
/* } */

void MergeInsertSortDeque(std::deque<int> &DataDeque)
{    
    int holder = 0;
    std::deque<std::deque<int> > result;

    if(DataDeque.size() % 2 != 0)
        holder = DataDeque.back(); 
    
    result = DevideAndSortPairsRecursively(DataDeque.begin(), DataDeque.end());
    
    PrintMainContainer(result);
    DataDeque.clear();
    InsertingElement(DataDeque, result, holder);
}




