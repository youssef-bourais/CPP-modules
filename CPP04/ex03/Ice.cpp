/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:14:20 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 18:46:20 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout<< "default constructor for ice called"<<std::endl;
}

Ice::~Ice()
{
    std::cout<< "deconstructor for ice called"<<std::endl;
}

Ice::Ice(Ice const &src)
{
    std::cout<< "copy constructor for AMateria called"<<std::endl;
    this->type = src.type;
}


Ice &Ice::operator=(Ice const &s)
{
    if(this != &s)
        this->type = s.type; 
    return *this;
}

Ice::clone()
{

}

