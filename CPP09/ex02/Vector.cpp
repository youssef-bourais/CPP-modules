/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:35 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 11:22:04 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

void UnflatteningVecTwoToOne(std::vector<std::vector<int> > &Vec)
{
    std::vector<std::vector<int> > MergedVec;
    for (std::vector<std::vector<int> >::iterator it = Vec.begin(); it != Vec.end(); it += 2)
    { 
        std::vector<int> pair;
        for (std::vector<int>::iterator subit = it->begin(); subit != it->end(); subit++)
            pair.push_back((*subit));
        for (std::vector<int>::iterator subit = (it + 1)->begin();subit != (it + 1)->end(); subit++)
            pair.push_back((*subit));
        MergedVec.push_back(pair);
        pair.clear();
    }
    Vec.clear();
    Vec = MergedVec;
}

void FlatteningVecOneToTwo(std::vector<std::vector<int> > &paired)
{
    std::vector<std::vector<int> > NewVec;
    std::vector<int> pair;
    int midle = paired.at(0).size()/2;
    if(!paired.at(0).size())
        return;

    for (std::vector<std::vector<int> >::iterator outur = paired.begin();outur != paired.end(); outur++)
    {
        std::vector<int>::iterator Iner1 = outur->begin();
        int i = 0;
        while(i < midle)
        {
            pair.push_back(*Iner1);
            Iner1++;
            i++;
        }
        NewVec.push_back(pair);
        pair.clear();
        while (Iner1 != outur->end()) 
        {
            pair.push_back(*Iner1);
            Iner1++;
        }
        NewVec.push_back(pair);
        pair.clear();
    }
    paired.clear();
    paired = NewVec;
}

void PrintInerVector(std::vector<int> Vec)
{
    std::vector<int>::iterator it = Vec.begin();
    std::cout << WHITE_TEXT <<"["<< RESET_TEXT;
	while (it != Vec.end())
	{
		std::cout << *it ;
		if (it + 1 != Vec.end())
			std::cout << ", ";
		it++;
	}
    std::cout << WHITE_TEXT<<"]" << RESET_TEXT;
}

void PrintOutorVector(std::vector<std::vector<int> >& Vec)
{
    std::vector<std::vector<int> >::iterator it = Vec.begin();
    std::cout << BLUE_TEXT <<"[" << RESET_TEXT;
	while (it != Vec.end())
	{
        PrintInerVector(*it);
		if (it + 1 != Vec.end())
        {
            std::cout << YELLOW_TEXT;
			std::cout << ", ";
            std::cout << RESET_TEXT;
        }
		it++;
	}
  std::cout << BLUE_TEXT <<"]" << RESET_TEXT << std::endl;
}

void Sort(std::vector<std::vector<int> > &Vec)
{
    std::vector<int> rest;
    std::vector<std::vector<int> > main;
    std::vector<std::vector<int> > paind;
   
    if(Vec.size() % 2 != 0)
    {
        rest = Vec.back(); 
        Vec.pop_back();
    }
    PrintOutorVector(Vec);
    swap(Vec);
    PrintOutorVector(Vec);
    UnflatteningVecTwoToOne(Vec);
    PrintOutorVector(Vec);
    std::cout<<std::endl;
    
    if(Vec.size() > 1)
        Sort(Vec);
    if(Vec.at(0).size() > 1)
        FlatteningVecOneToTwo(Vec);
    PrintOutorVector(Vec);
}

void swap(std::vector<std::vector<int> > &T) 
{
    std::vector<std::vector<int> >::iterator it =  T.begin();
    while (it != T.end()) 
    {
        std::vector<int>::iterator it1 = it->end() - 1;
        std::vector<int>::iterator it2 = ((it + 1)->end() - 1);
        if(*it1 > *it2)
        {
			std::swap(*it, *(it + 1));
        }
        it += 2;
    }
}

void MergeInsertSortVector(std::vector<int> &DataVector)
{    
    std::vector<std::vector<int> > result;
    std::vector<std::vector<int> > VecOfVec;
    std::vector<int>::iterator it = DataVector.begin();
    while (it != DataVector.end()) 
    {
        std::vector<int> tmp;
        tmp.push_back(*it);
        VecOfVec.push_back(tmp);
        it++;
    }
    Sort(VecOfVec);
    /* PrintMainContainer(result); */
    DataVector.clear();
    /* InsertingElement(DataVector, result, holder); */
}

