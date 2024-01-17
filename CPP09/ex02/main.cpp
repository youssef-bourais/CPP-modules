/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 18:31:46 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int main(int ac, char **av)
{
    std::vector<int> DataVector;
    std::deque<int> DataDeque;
    std::clock_t Start1, Start2;
    
    if(ac < 4 || !ParssNumbers(av, DataVector, DataDeque))
    {
        std::cerr<< "Error: a sequence of Positive Intiger Needed!!\n";
        return 1;
    }
    
    std::cout <<"Before : "<<std::endl;
    PrintInerContainer(DataVector);
    std::cout <<std::endl;
    
    Start1 = std::clock();
    std::vector<std::vector<int> > result = MergeInsertSortVector(DataVector);
    
    std::cout<<"After : "<<std::endl;
    PrintOutorContainer(result);
    std::cout <<std::endl;
    std::cout << "Time to process a range of "<<DataVector.size()<<" elements with std::vector : "<<std::fixed<<std::setprecision(3)<<GetTakingTime(Start1)<<"us\n";
    
    Start2 = std::clock();
    std::deque<std::deque<int> > resultd = MergeInsertSortDeque(DataDeque);
    
    std::cout<<"After : "<<std::endl;
    /* PrintOutorContainer(resultd); */
    /* std::cout <<std::endl; */
    std::cout << "Time to process a range of "<<DataDeque.size()<<" elements with std::deque : "<<std::fixed<<std::setprecision(3)<<GetTakingTime(Start1)<<"us\n";
    return 0;
}



