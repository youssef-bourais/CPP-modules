/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:35 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/16 05:57:42 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

void UnflatteningVecOneToTwo(std::vector<std::vector<int> > &paired)
{
    std::vector<std::vector<int> > new_elems;

    for (std::vector<std::vector<int> >::iterator it = paired.begin(); it != paired.end(); it += 2)
    {
        std::vector<int> pair;
        for (int i = 0; i < (int)it->size() || i < (int)(it + 1)->size(); ++i)
        {
            if (i < (int)it->size())
                pair.push_back((*it)[i]);

            if (i < (int)(it + 1)->size())
                pair.push_back((*(it + 1))[i]);
        }
        new_elems.push_back(pair);
        pair.clear();
    }
    paired.clear();
    paired = new_elems;
}

void FlatteningVecTwoToOne(std::vector<std::vector<int> > &paired)
{
    std::vector<std::vector<int> > new_elems;

    int i = 0;
    for (std::vector<std::vector<int> >::iterator outur = paired.begin(); i < paired.size() && outur != paired.end(); outur ++)
    {
        std::vector<int>::iterator Iner = outur->begin();
        std::vector<int> pair;
        for (int i = 0; i < (int)outur->size(); ++i)
        {
            pair.push_back((*Iner));
        }
        if(i + 1 == paired.size()/2 || i + 1 == paired.size())
            new_elems.push_back(pair);
        /* pair.clear(); */
        i++;
    }
    paired.clear();
    paired = new_elems;
}

void DevideAndSortPairsRecursively(std::vector<std::vector<int> > &Vec)
{
    std::vector<int> rest;
    std::vector<std::vector<int> > main;
    std::vector<std::vector<int> > paind;
   
    if(Vec.size() % 2 != 0)
    {
        rest = Vec.back(); 
        Vec.pop_back();
    }
    swap(Vec);
    UnflatteningVecOneToTwo(Vec); // make size/2 pairs;

    /* std::vector<std::vector<int> >::iterator it = mainOne.begin(); */
    /* while (it != mainOne.end())  */
    /* { */
    /*     std::vector<int>::iterator itt = it->begin(); */
    /*     while (itt != it->end())  */
    /*     { */
    /*         std::cout<< *itt<<" "; */
    /*         itt++; */
    /*     } */
    /*     std::cout<<std::endl; */
    /*     it++; */
    /* }  */
    if(Vec.size() > 1)
    {
        DevideAndSortPairsRecursively(Vec);
    }
    if(Vec.at(0).size() > 1)
        FlatteningVecTwoToOne(Vec);
    /* std::vector<std::vector<int> >::iterator tmp = Vec.begin(); */
    /* mainOne.push_back(pairs); */
    /* if(VBeging != VEnd)  */
    /* { */
    /*     if(VBeging + 2 < VEnd) //  */
    /*     { */
    /* DevideAndSortPairsRecursively(Vec); */
    /* mainOne.insert(mainOne.end(), result.begin(), result.end()); */
    /*     } */
    /* } */
    /* mergesort(mainOne); */
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
    DevideAndSortPairsRecursively(VecOfVec);
    /* PrintMainContainer(result); */
    DataVector.clear();
    /* InsertingElement(DataVector, result, holder); */
}

