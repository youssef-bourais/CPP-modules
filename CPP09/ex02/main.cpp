/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/12 08:24:59 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cwchar>
#include <deque>
#include <sstream>
#include <vector>

long CheckError(std::string Arg)
{
    long Number = 0;
    std::istringstream Num(Arg);
    if(Num >> Number && (!Num.fail() && Num.eof()) && Number < INT_MAX && Number > -1 && Arg.find(".") == std::string::npos)
        return Number;
    return 0;
}

int ParssNumbers(char **Table, std::vector<int> &Vector, std::deque<int> &Deque)
{
    long Value = 0;
    int i = 1;
    while (Table[i]) 
    {
        Value = CheckError(Table[i]);
        if(!Value)
            return 0;
        Vector.push_back(Value);
        Deque.push_back(Value);
        i++;
    }
    return 1;
}

std::vector<std::vector<int> > OPETATION(std::vector<int>::const_iterator  VBeging, std::vector<int>::const_iterator VEnd)
{
    std::vector<int> pairs;
    std::vector<std::vector<int> > mainOne;
    
    std::vector<int>::const_iterator it;
    it = VBeging;

    /* while (it != VEnd) */
    /* { */
       std::vector<int>::const_iterator tmp = it;
       int i = 0;
       while(i < 2 && it != VEnd)
       {
            pairs.push_back(*tmp); 
            it++;
            i++;
       }
       mainOne.push_back(pairs);
       /* pairs.clear(); */
       /* it = tmp; */
    /* } */
    if(VBeging != VEnd)
    {
        std::vector<std::vector<int> > result = OPETATION(VBeging + 1, VEnd);
        return result;

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
        std::vector<int>::const_iterator pair = it->begin();
        while (pair != it->end()) 
        {
            std::cout<< *pair<<" ";
            pair++;
        }
        it++;
    }
    /* std::this_thread::sleep_for(std::chrono::seconds(1)); */
    GetTakingTime(Start);
    
    return 0;
}

