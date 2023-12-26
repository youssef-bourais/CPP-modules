/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:36:10 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 05:07:53 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base* generate();
void identify(Base* p); 
void identify(Base& p); 

#endif


