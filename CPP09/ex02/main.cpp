/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/15 06:45:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"




int main(int ac, char **av)
{
    /* std::clock_t Start = std::clock(); */
    std::vector<int> DataVector;
    std::deque<int> DataDeque;

    if(ac < 4 || !ParssNumbers(av, DataVector, DataDeque))
    {
        std::cerr<< "Error: a sequence of Positive Intiger Needed!!\n";
        return 1;
    }
    PrintSequence(DataVector, "vactor: ");
    MergeInsertSortVector(DataVector);
    PrintSequence(DataVector, "after sorting: ");



    PrintSequence(DataDeque, "deque: ");



    MergeInsertSortDeque(DataDeque);
    PrintSequence(DataDeque, "after sorting: ");

    /* std::this_thread::sleep_for(std::chrono::seconds(1)); */
    /* GetTakingTime(Start); */
    return 0;
}



