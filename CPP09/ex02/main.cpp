/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/13 15:13:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <__errc>
#include <climits>
#include <cstddef>
#include <cwchar>
#include <deque>
#include <sstream>
#include <vector>

long CheckError(std::string Arg)
{
    long Number = -1;
    std::istringstream Num(Arg);
    Num >> Number;
    if ((!Num.fail() && Num.eof()) && Number < INT_MAX && Arg.find(".") == std::string::npos && Number >= 0)
        return Number;
    return -1;
}

int ParssNumbers(char **Table, std::vector<int> &Vector, std::deque<int> &Deque)
{
    long Value = 0;
    int i = 1;
    while (Table[i]) 
    {
        Value = CheckError(Table[i]);
        if(Value == -1)
        {
            return 0;
        }
        Vector.push_back(Value);
        Deque.push_back(Value);
        i++;
    }
    return 1;
}


/* template <typename T> */
/* void InsertionSort(T &container) */
/* { */
/*     typename T::iterator it = container.begin();  */
/*     while (it != container.end())  */
/*     { */
/*          typename  T::iterator jt = it; */
/*          while (jt != container.begin() && *(jt - 1) > *(jt))  */
/*          { */
/*              int tmp = *(jt - 1); */
/*              *(jt - 1) = *jt; */
/*              *jt = tmp; */
/*              jt--; */
/*          } */
/*          it++; */
/*      } */
/* } */

template <typename T>
void InsertionSort(T &container) 
{
    for (typename T::size_type i = 1; i < container.size(); ++i) 
    {
        typename T::value_type tmp = container[i];
        typename T::size_type j = i;
        while (j > 0 && container[j - 1] > tmp) 
        {
            container[j] = container[j - 1];
            --j;
        }
        container[j] = tmp;
    }
}

std::vector<std::vector<int> > OPETATION(std::vector<int>::const_iterator  VBeging, std::vector<int>::const_iterator VEnd)
{
    std::vector<int> pairs;
    std::vector<std::vector<int> > mainOne;

    std::vector<int>::const_iterator it;
    it = VBeging;

    std::vector<int>::const_iterator tmp = VBeging;
    int i = 0;
    while(i < 2 && tmp != VEnd)
    {
        pairs.push_back(*tmp); 
        tmp++;
        i++;
    }
    InsertionSort(pairs);
    mainOne.push_back(pairs);
    if(VBeging != VEnd)
    {
        if(VBeging + 2 < VEnd)
        {
            std::vector<std::vector<int> > result = OPETATION(VBeging + 2, VEnd);
            mainOne.insert(mainOne.end(), result.begin(), result.end());
        }
    }
    return mainOne;
}

void DisplayContainers(std::vector<int> const &DataVector, std::deque<int> const &DataDeque)
{
    std::cout << GREEN_TEXT;
    std::cout << "Vector Container: {";
    PrintSequence(DataVector);
    std::cout << GREEN_TEXT;
    std::cout << "Deque  Container: {";
    PrintSequence(DataDeque);
}

void GetTakingTime(std::clock_t Start)
{
    std::clock_t End = std::clock();
    double Time = static_cast<double>((End - Start)*MICROSECONDS) / CLOCKS_PER_SEC;  
    std::cout << YELLOW_TEXT; // Set text color to yellow
    std::cout << "\nElapsed time: " << Time << " microseconds" << std::endl;
}

#include <thread>
int main(int ac, char **av)
{
    std::clock_t Start = std::clock();

    std::vector<int> DataVector;
    std::deque<int> DataDeque;

    if(ac < 4 || !ParssNumbers(av, DataVector, DataDeque))
    {
        std::cerr<< "Error: a sequence of Positive Intiger Needed!!\n";
        return 1;
    }

    /* DisplayContainers(DataVector, DataDeque); */
    std::vector<std::vector<int> > result = OPETATION(DataVector.begin(), DataVector.end());
    std::vector<std::vector<int> >::const_iterator it = result.begin();
    while (it != result.end()) 
    {
        std::vector<int>::const_iterator its = it->begin();
        while (its != it->end()) 
        {
            std::cout<< *its<<" ";
            its++;
        }
        std::cout<<std::endl;
        it++;
    }
    /* std::this_thread::sleep_for(std::chrono::seconds(1)); */
    GetTakingTime(Start);

    return 0;
}



