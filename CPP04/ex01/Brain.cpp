/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:54:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:01:18 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while(i < 100)
    {
       ideas[i++] = "null"; 
    }
    std::cout<< "constructor for Brain called"<<std::endl;
}

Brain::~Brain()
{
    std::cout<< "deconstructor for Brain called"<<std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout<< "copy constructor for Brain called"<<std::endl;
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
}

Brain & Brain::operator=(Brain const &s)
{
    int i = 0;
    if(this != &s)
    {
        while(i < 100)
        {
           ideas[i] = s.ideas[i];
            i++;
        }
    }
    return *this;
}

void Brain::set(std::string str, int i)
{
    if(i >= 0 && i < 100)
        ideas[i] = str;
}

std::string Brain::get(int i)
{
    if(i >= 0 && i < 100)
        return ideas[i];
    return "NULL";
}









