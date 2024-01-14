/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:53 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/14 08:22:18 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <sstream>
#include <vector>

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

template <typename T>
void InsertionSort(T &container)
{
    int i = 0;
    while (i < (int)container.size()) 
    {
         int j = i;
         while (j > 0 && container[j - 1][0] > container[j][0]) 
         {
            std::vector<int> tmp = container[j - 1];
            container[j - 1] = container[j];
            container[j] = tmp;
            j--;
         }
         i++;
     }
}

template <typename T>
void SwapElement(T &Container)
{
    if(Container.size() > 1 && Container[0] > Container[1])
    {
        int tmp = Container[0];
        Container[0] = Container[1];
        Container[1] = tmp;
    }
}

void merge(std::vector<std::vector<int> > &Vec1, std::vector<std::vector<int> > &Vec2, std::vector<std::vector<int> > &Vec)
{
    int i = 0;
    int l = 0;
    int r = 0;
    int size = (int)Vec.size();
    while (l < size/2 && r < size - size/2) 
    {
        if(Vec1[l][0] < Vec2[r][0])
            Vec[i] = Vec1[l++];
        else
            Vec[i] = Vec2[r++];
        i++;
    }
    while (l < size/2) 
    {
        Vec[i] = Vec1[l];
        i++;
        l++;
    }   
    while (r < size - size/2) 
    {
        Vec[i] = Vec2[r];
        i++;
        r++;
    }
}


void mergesort(std::vector<std::vector<int> > &T)
{
    if(T.size() <= 1)
        return ;

    std::vector<std::vector<int> > vec1;
    std::vector<std::vector<int> > vec2;

    int midle = T.size()/2;

    int i = 0;
    while (i < (int)T.size()) 
    {
        if(i < midle)
            vec1.push_back(T[i]);
        else 
            vec2.push_back(T[i]);
        i++;
    }
    mergesort(vec1);
    mergesort(vec2);
    merge(vec1, vec2, T); 
}

std::vector<std::vector<int> > DevideAndSortPairsRecursively(std::vector<int>::const_iterator  VBeging, std::vector<int>::const_iterator VEnd)
{
    std::vector<int> pairs;
    std::vector<std::vector<int> > mainOne;

    std::vector<int>::const_iterator tmp = VBeging;
    int i = 0;
    while(i < 2 && tmp != VEnd)
    {
        pairs.push_back(*tmp); 
        tmp++;
        i++;
    }
    SwapElement(pairs);
    mainOne.push_back(pairs);
    if(VBeging != VEnd) 
    {
        if(VBeging + 2 < VEnd) // 
        {
            std::vector<std::vector<int> > result = DevideAndSortPairsRecursively(VBeging + 2, VEnd);
            mainOne.insert(mainOne.end(), result.begin(), result.end());
        }
    }
    mergesort(mainOne);
    return mainOne;
}

void DisplayContainers(std::vector<int> const &DataVector, std::deque<int> const &DataDeque)
{
    std::cout << GREEN_TEXT;
    PrintSequence(DataVector, "Vector container: ");
    std::cout << GREEN_TEXT;
    PrintSequence(DataDeque, "Vector container: ");
}

void GetTakingTime(std::clock_t Start)
{
    std::clock_t End = std::clock();
    double Time = static_cast<double>((End - Start)*MICROSECONDS) / CLOCKS_PER_SEC;  
    std::cout << YELLOW_TEXT; // Set text color to yellow
    std::cout << "\nElapsed time: " << Time << " Microseconds" << std::endl;
}

typedef struct Chains
{
    std::vector<int> MainChain;
    std::vector<int> PainChain;
} t_Chains;


void CreatChains(std::vector<std::vector<int> > const &result, t_Chains *Data)
{
    (void)Data;
    std::vector<std::vector<int> >::const_iterator it = result.begin();
    std::vector<int>::const_iterator jt;
    std::cout<< "a b"<<std::endl;
    while (it != result.end()) 
    {
        jt = it->begin();
        int j = 0;
        while (jt != it->end()) 
        {
            if(j == 0)
            {
                std::cout<< *jt<<" ";

                /* Data->MainChain.push_back(*jt); */
            }
            else
            {
                std::cout<< *jt<<std::endl;

                /* Data->PainChain.push_back(*jt); */
            }
            jt++;
            j++;
        }
        it++;
    }
}



int main(int ac, char **av)
{
    /* std::clock_t Start = std::clock(); */
    std::vector<int> DataVector;
    std::deque<int> DataDeque;
    int holder = 0;

    if(ac < 4 || !ParssNumbers(av, DataVector, DataDeque))
    {
        std::cerr<< "Error: a sequence of Positive Intiger Needed!!\n";
        return 1;
    }
    if(DataVector.size() % 2 != 0)
        holder = DataVector.back(); 
    std::vector<std::vector<int> > result = DevideAndSortPairsRecursively(DataVector.begin(), DataVector.end());
    std::vector<int> main;
    int i = 0;
    
    int index = 0;
        
    if(holder)
        index = 1;
        //do somthing

        // holder if exist or not
    while(i < (int)result.size() - 1)
    {
        if(i == (int)result.size() - 2 && holder)
            main.push_back((*(result.end() - 2))[1]);
        main.push_back(result[i++][0]);
        /* if(holder && i == (int)result.size() - 1) */
        /*     main.push_back(holder); */
    }

    t_Chains Data;
    CreatChains(result, &Data);
    PrintSequence(main, "after: ");
    /* PrintMainAndPainChains(&Data); */
    /* PrintSequence(Data.MainChain, "MainChain "); */
    /* PrintSequence(Data.PainChain, "PaidChain "); */

    /* std::vector<std::vector<int> >::const_iterator it = result.begin(); */
    /* while (it != result.end())  */
    /* { */
    /*     std::vector<int>::const_iterator its = it->begin(); */
    /*     while (its != it->end())  */
    /*     { */
    /*         std::cout<< *its<<" "; */
    /*         its++; */
    /*     } */
    /*     std::cout<<std::endl; */
    /*     it++; */
    /* } */
    /* std::this_thread::sleep_for(std::chrono::seconds(1)); */
    /* GetTakingTime(Start); */
    return 0;
}



