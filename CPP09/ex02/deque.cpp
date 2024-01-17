/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 05:31:45 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 18:29:16 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void UnflatteningDequeTwoToOne(std::deque<std::deque<int> > &Deq)
{
    std::deque<std::deque<int> > MergedVec;
    for (std::deque<std::deque<int> >::iterator it = Deq.begin(); it != Deq.end(); it += 2)
    { 
        std::deque<int> pair;
        for (std::deque<int>::iterator subit = it->begin(); subit != it->end(); subit++)
            pair.push_back((*subit));
        for (std::deque<int>::iterator subit = (it + 1)->begin();subit != (it + 1)->end(); subit++)
            pair.push_back((*subit));
        MergedVec.push_back(pair);
        pair.clear();
    }
    Deq.clear();
    Deq = MergedVec;
}

void FlatteningDequeOneToTwo(std::deque<std::deque<int> > &paired)
{
    std::deque<std::deque<int> > NewDeq;
    std::deque<int> pair;
    int midle = paired.at(0).size()/2;
    if(!paired.at(0).size())
        return;

    for (std::deque<std::deque<int> >::iterator outur = paired.begin();outur != paired.end(); outur++)
    {
        std::deque<int>::iterator Iner1 = outur->begin();
        int i = 0;
        while(i < midle)
        {
            pair.push_back(*Iner1);
            Iner1++;
            i++;
        }
        NewDeq.push_back(pair);
        pair.clear();
        while (Iner1 != outur->end()) 
        {
            pair.push_back(*Iner1);
            Iner1++;
        }
        NewDeq.push_back(pair);
        pair.clear();
    }
    paired.clear();
    paired = NewDeq;
}

void CreatTwoChainDeque(std::deque<std::deque<int> > &Deq, std::deque<std::deque<int> > &Main, std::deque<std::deque<int> > &paind)
{
    int i = 0;    
    for (std::deque<std::deque<int> >::iterator it = Deq.begin();it != Deq.end();it++) 
    {
        if(i % 2 != 0)
            Main.push_back(*it);
        else 
            paind.push_back(*it);
        i++;
    }
}

bool compare(std::deque<int> a, std::deque<int> b)
{
  return (a.back() <= b.back());
}


void InsertPaindInMainDeq(std::deque<std::deque<int> > &main, std::deque<std::deque<int> > &Paind)
{    
    std::deque<std::deque<int> >::iterator it = Paind.begin();
    while (it != Paind.end()) 
    {
        std::deque<std::deque<int> >::iterator insertionPoint = std::lower_bound(main.begin(), main.end(), *it, compare);
        if (insertionPoint != main.end()) 
            main.insert(insertionPoint, *it);
        else
            main.push_back(*it);
        it++;
    }
}

void Swap(std::deque<std::deque<int> > &T) 
{
    std::deque<std::deque<int> >::iterator it =  T.begin();
    while (it != T.end()) 
    {
        std::deque<int>::iterator it1 = it->end() - 1;
        std::deque<int>::iterator it2 = ((it + 1)->end() - 1);
        if(*it1 > *it2)
			std::swap(*it, *(it + 1));
        it += 2;
    }
}

void SortDeque(std::deque<std::deque<int> > &Deq)
{
    std::deque<int> rest;
    std::deque<std::deque<int> > main;
    std::deque<std::deque<int> > paind;
    if(Deq.size() % 2 != 0)
    {
        rest = Deq.back(); 
        Deq.pop_back();
    }
    Swap(Deq);
    UnflatteningDequeTwoToOne(Deq);
    if(Deq.size() > 1)
        SortDeque(Deq);
    if(Deq.at(0).size() > 1)
        FlatteningDequeOneToTwo(Deq);
    CreatTwoChainDeque(Deq, main, paind);
    if(rest.size())
        paind.push_back(rest);
    InsertPaindInMainDeq(main, paind);
    Deq.clear();
    Deq = main; 
}

std::deque<std::deque<int> > MergeInsertSortDeque(std::deque<int> &Deque)
{    
    std::deque<std::deque<int> > DequeOfDeque;
    std::deque<int>::iterator it = Deque.begin();
    while (it != Deque.end()) 
    {
        std::deque<int> tmp;
        tmp.push_back(*it);
        DequeOfDeque.push_back(tmp);
        it++;
    }
    SortDeque(DequeOfDeque);
    Deque.clear();
    return DequeOfDeque;
}

