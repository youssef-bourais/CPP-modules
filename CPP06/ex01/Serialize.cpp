/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Serialize.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:51:29 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 02:08:48 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::~Serialize()
{
    std::cout<< "deconstructor called"<<std::endl;
}

uintptr_t Serialize::serialize(Data* ptr) 
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw) 
{
    return (reinterpret_cast<Data*>(raw));
}


