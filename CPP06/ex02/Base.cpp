/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:36:05 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 05:22:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::~Base()
{
}

Base* generate()
{
    int i;
    i = (rand()%3)+1;

    switch(i)
    {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
    }
    return NULL;
}

void identify(Base* p) 
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
    else
        std::cout<< "unknown"<<std::endl;
}

void identify(Base& p) 
{
    try 
    {
        A& aRef = dynamic_cast<A&>(p);
        (void)aRef;
        std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast&) 
    {
        try 
        {
            B& bRef = dynamic_cast<B&>(p);
            (void)bRef;
            std::cout << "B" << std::endl;
        } 
        catch (const std::bad_cast&) 
        {
            try 
            {
                C& cRef = dynamic_cast<C&>(p);
                (void)cRef;
                std::cout << "C" << std::endl;
            } 
            catch (const std::bad_cast&) 
            {
                std::cout << "unknown" << std::endl;
            }
        }
    }
}


