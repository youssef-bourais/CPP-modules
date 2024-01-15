/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:28:20 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/15 06:55:40 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <deque>
#include <sys/wait.h>
#include <vector>
#include <sstream>

#define MICROSECONDS 1000000LL
#define YELLOW_TEXT "\033[1;33m"
#define GREEN_TEXT "\033[1;32m"

template <typename T>
void PrintSequence(const T &container, std::string a)
{
    std::cout<<std::endl;
    typename T::const_iterator it = container.begin();

    std::cout << YELLOW_TEXT;
    std::cout<< a<<": ";

    while (it != container.end())
    {
        std::cout << *it;
        it++;
        if(it != container.end())
           std::cout<<", ";
    }
    std::cout << GREEN_TEXT;
    /* std::cout << "}\n"; */
    std::cout << "\n";
}

template <typename T>
void SwapElement(T &Container)
{
    if(Container.size() > 1 && Container[0] > Container[1])
    {
        int tmp = Container[0];
        Container[0] = Container[1];
        Container[1] = tmp;
    }
}


template <typename Container>
void PrintMainContainer(const Container &result)
{
    typename Container::const_iterator it = result.begin();
    typename Container::value_type::const_iterator jt;

    std::cout << "a b" << std::endl;
    while (it != result.end())
    {
        jt = it->begin();
        int j = 0;
        while (jt != it->end())
        {
            if (j == 0)
                std::cout << *jt << " ";
            else
                std::cout << *jt << std::endl;
            jt++;
            j++;
        }
        it++;
    }
}

template <typename Container>
void merge(Container &T1, Container &T2, Container &T)
{
    int i = 0;
    int l = 0;
    int r = 0;
    int size = (int)T.size();
    while (l < size/2 && r < size - size/2) 
    {
        if(T1[l][0] < T2[r][0])
            T[i] = T1[l++];
        else
            T[i] = T2[r++];
        i++;
    }
    while (l < size/2) 
    {
        T[i] = T1[l];
        i++;
        l++;
    }   
    while (r < size - size/2) 
    {
        T[i] = T2[r];
        i++;
        r++;
    }
}

template <typename Container>
void mergesort(Container &T)
{
    if(T.size() <= 1)
        return ;

    Container T1;
    Container T2;

    int midle = T.size()/2;

    int i = 0;
    while (i < (int)T.size()) 
    {
        if(i < midle)
            T1.push_back(T[i]);
        else 
            T2.push_back(T[i]);
        i++;
    }
    mergesort(T1);
    mergesort(T2);
    merge(T1, T2, T); 
}

template <typename Container>
int BinarySearch(Container const &ARRAY, int Pivot)
{
    int low = 0;
    int hight = ARRAY.size() - 1;
    int midle = 0;
    while (low <= hight) 
    {
        midle = (hight + low)/2;
        if(low == hight)
        {
            if(ARRAY[midle] < Pivot)
                low = midle + 1;
            break;
        }
        else if(ARRAY[midle] < Pivot) 
            low = midle + 1; 
        else 
            hight = midle - 1;
    }
    return low;
}


template <typename Container1, typename Container2>
void InsertPaindInMain(Container1 &main, Container2 &result)
{    
    int len; 
    len = result.size() - 2;
    int i = 0;
    while (i < len) 
    {
        int var = result[i++][1];
        int IndexToInsert = BinarySearch(main, var);
        main.insert(main.begin() + IndexToInsert, var);
    }                                                              
}

template <typename Container1, typename Container2>
void InsertingElement(Container1 &main, Container2 &result, int holder)
{
    int i = 0;
    while(i < (int)result.size() - 1)
        main.push_back(result[i++][0]);
    
    if (!holder) 
    {
        main.push_back(result[i][0]);
        main.push_back(result[i][1]);
    }
    else 
    {
        main.push_back(result[--i][1]);
        int IndexToInsert = BinarySearch(main, holder);
        main.insert(main.begin() + IndexToInsert, holder);

    }
    /* PrintSequence(main, "after: "); */
    InsertPaindInMain(main, result);
}



// Vector
void MergeInsertSortVector(std::vector<int> &DataVector);
int ParssNumbers(char **Table, std::vector<int> &Vector, std::deque<int> &Deque);
/* int BinarySearch(std::vector<int> const &ARRAY, int Pivot); */
/* void InsertPaindInMain(std::vector<int> &main, std::vector<std::vector<int> > &result); */
/* void InsertingElement(std::vector<int> &main, std::vector<std::vector<int> > &result, int holder); */
std::vector<std::vector<int> > DevideAndSortPairsRecursively(std::vector<int>::const_iterator  VBeging, std::vector<int>::const_iterator VEnd);
/* void mergesort(std::vector<std::vector<int> > &T); */
/* void merge(std::vector<std::vector<int> > &Vec1, std::vector<std::vector<int> > &Vec2, std::vector<std::vector<int> > &Vec); */
/**/
/**/

// Deque

void MergeInsertSortDeque(std::deque<int> &DataDeque);
/* void InsertingElement(std::deque<int> &main, std::deque<std::deque<int> > &result, int holder); */
/* void InsertPaindInMain(std::deque<int> &main, std::deque<std::deque<int> > &result); */
/* int BinarySearch(std::deque<int> const &ARRAY, int Pivot); */
std::deque<std::deque<int> > DevideAndSortPairsRecursively(std::deque<int>::const_iterator  VBeging, std::deque<int>::const_iterator VEnd);
/* void mergesort(std::deque<std::deque<int> > &T); */
/* void merge(std::deque<std::deque<int> > &Vec1, std::deque<std::deque<int> > &Vec2, std::deque<std::deque<int> > &Vec); */




long CheckError(std::string Arg);
int ParssNumbers(char **Table, std::vector<int> &Vector, std::deque<int> &Deque);
void DisplayContainers(std::vector<int> const &DataVector, std::deque<int> const &DataDeque);
void GetTakingTime(std::clock_t Start);
void PrintMainVector(std::vector<std::vector<int> > const &result);


#endif
