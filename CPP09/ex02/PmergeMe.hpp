/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:28:20 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 18:25:47 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <deque>
#include <vector>
#include <sstream>

#define MICROSECONDS 1000000
#define WHITE_TEXT "\033[1;37m"
#define YELLOW_TEXT "\033[1;33m"
#define BLUE_TEXT "\033[1;34m"
#define RESET_TEXT "\033[0m"


std::vector<std::vector<int> > MergeInsertSortVector(std::vector<int> &DataVector);
void SortVector(std::vector<std::vector<int> > &Vec);
void InsertPaindInMain(std::vector<std::vector<int> > &main, std::vector<std::vector<int> > &Paind);
bool Compare(std::vector<int> a, std::vector<int> b);
void CreatTwoChainVec(std::vector<std::vector<int> > &Vec, std::vector<std::vector<int> > &Main, std::vector<std::vector<int> > &paind);
void FlatteningVecOneToTwo(std::vector<std::vector<int> > &paired);
void UnflatteningVecTwoToOne(std::vector<std::vector<int> > &Vec);


std::deque<std::deque<int> > MergeInsertSortDeque(std::deque<int> &DataVector);
void UnflatteningDequeTwoToOne(std::deque<std::deque<int> > &Deq);
void FlatteningDequeOneToTwo(std::deque<std::deque<int> > &paired);
void CreatTwoChainDeque(std::deque<std::deque<int> > &Deq, std::deque<std::deque<int> > &Main, std::deque<std::deque<int> > &paind);
bool compare(std::deque<int> a, std::deque<int> b);
void InsertPaindInMainDeq(std::deque<std::deque<int> > &main, std::deque<std::deque<int> > &Paind);
void SortDeque(std::deque<std::deque<int> > &Deq);

long CheckError(std::string Arg);
int ParssNumbers(char **Table, std::vector<int> &Vector, std::deque<int> &Deque);
double GetTakingTime(std::clock_t Start);


template <typename Container>
void PrintInerContainer(const Container &Vec)
{
    typename Container::const_iterator it = Vec.begin();
    /* std::cout << WHITE_TEXT <<"["<< RESET_TEXT; */
	while (it != Vec.end())
	{
		std::cout << *it ;
		if (it + 1 != Vec.end())
			std::cout << ", ";
		it++;
	}
    /* std::cout << WHITE_TEXT<<"]" << RESET_TEXT; */
}

template <typename Container>
void PrintOutorContainer(const Container &Vec)
{
    typename Container::const_iterator it = Vec.begin();
    /* std::cout << BLUE_TEXT <<"[" << RESET_TEXT; */
	while (it != Vec.end())
	{
        PrintInerContainer(*it);
		if (it + 1 != Vec.end())
        {
            /* std::cout << YELLOW_TEXT; */
			std::cout << ", ";
            /* std::cout << RESET_TEXT; */
        }
		it++;
	}
    /* std::cout << BLUE_TEXT <<"]" << RESET_TEXT << std::endl; */
}



#endif
