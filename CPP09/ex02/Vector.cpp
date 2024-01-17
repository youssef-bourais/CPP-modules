/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:35 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 18:22:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

void CreatTwoChainVec(std::vector<std::vector<int> > &Vec, std::vector<std::vector<int> > &Main, std::vector<std::vector<int> > &paind)
{
    int i = 0;    
    for (std::vector<std::vector<int> >::iterator it = Vec.begin();it != Vec.end();it++) 
    {
        if(i % 2 != 0)
            Main.push_back(*it);
        else 
            paind.push_back(*it);
        i++;
    }
}

bool Compare(std::vector<int> a, std::vector<int> b)
{
  return (a.back() <= b.back());
}

void InsertPaindInMain(std::vector<std::vector<int> > &main, std::vector<std::vector<int> > &Paind)
{    
    std::vector<std::vector<int> >::iterator it = Paind.begin();
    while (it != Paind.end()) 
    {
        std::vector<std::vector<int> >::iterator insertionPoint = std::lower_bound(main.begin(), main.end(), *it, Compare);
        if (insertionPoint != main.end()) 
            main.insert(insertionPoint, *it);
        else
            main.push_back(*it);
        it++;
    }
}

void Swap(std::vector<std::vector<int> > &T) 
{
    std::vector<std::vector<int> >::iterator it =  T.begin();
    while (it != T.end()) 
    {
        std::vector<int>::iterator it1 = it->end() - 1;
        std::vector<int>::iterator it2 = ((it + 1)->end() - 1);
        if(*it1 > *it2)
			std::swap(*it, *(it + 1));
        it += 2;
    }
}

void SortVector(std::vector<std::vector<int> > &Vec)
{
    std::vector<int> rest;
    std::vector<std::vector<int> > main;
    std::vector<std::vector<int> > paind;
    if(Vec.size() % 2 != 0)
    {
        rest = Vec.back(); 
        Vec.pop_back();
    }
    Swap(Vec);
    UnflatteningVecTwoToOne(Vec);
    if(Vec.size() > 1)
        SortVector(Vec);
    if(Vec.at(0).size() > 1)
        FlatteningVecOneToTwo(Vec);
    CreatTwoChainVec(Vec, main, paind);
    if(rest.size())
        paind.push_back(rest);
    InsertPaindInMain(main, paind);
    Vec.clear();
    Vec = main; 
}

std::vector<std::vector<int> > MergeInsertSortVector(std::vector<int> &DataVector)
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
    SortVector(VecOfVec);
    DataVector.clear();
    return VecOfVec;
}

