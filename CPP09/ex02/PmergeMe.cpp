/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:29:11 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 17:42:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

double GetTakingTime(std::clock_t Start)
{
    std::clock_t End = std::clock();
    double Time = static_cast<double>(End - Start)*MICROSECONDS / static_cast<double>(CLOCKS_PER_SEC);  
    return Time;
}

