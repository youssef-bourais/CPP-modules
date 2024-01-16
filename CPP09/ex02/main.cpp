/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/16 03:10:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int main(int ac, char **av)
{
    std::vector<int> DataVector;
    std::deque<int> DataDeque;
    /* std::clock_t Start1; */
        /* , Start2; */

    if(ac < 4 || !ParssNumbers(av, DataVector, DataDeque))
    {
        std::cerr<< "Error: a sequence of Positive Intiger Needed!!\n";
        return 1;
    }
    /* PrintSequence(DataVector, "before: "); */
    
    /* Start1 = std::clock(); */
    MergeInsertSortVector(DataVector);

    /* std::cout << "Time to process a range of "<<DataVector.size()<<" elements with std::[vector] : "<<std::fixed<<std::setprecision(3)<<GetTakingTime(Start1)<<"us\n"; */
    
    /* Start2 = std::clock(); */
    /* MergeInsertSortDeque(DataDeque); */

    /* std::cout << "Time to process a range of "<<DataDeque.size()<<" elements with std::[deque] : "<<std::fixed<<std::setprecision(3)<<GetTakingTime(Start2)<<"us\n"; */

    PrintSequence(DataVector, "after: vector ");
    PrintSequence(DataDeque, "after: Deque ");
    return 0;
}



