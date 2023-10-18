/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:54:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:07:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "contructor for Brain called"<<std::endl;
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

void Brain::set_first_index(std::string str)
{
    ideas[0] = str;
}

std::string Brain::get_first_index()
{
    return ideas[0];
}









