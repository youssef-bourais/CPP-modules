/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:57:19 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:10:13 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    Animal* array[4];
    int i;
    for(i = 0; i < 4;i++)
    {
        if(i % 2 != 0)
            array[i] = new Cat;
        else
            array[i] = new Dog;
    }

    for(i = 0;i < 4;i++)
        std::cout<< array[i]->getType()<<std::endl;
   for(i = 0;i < 4;i++) 
       delete array[i]; 
    // Cat *test = new Cat();
    //
    // test->seter("macha", 20);
    //
    //
    // Cat *test2 = new Cat(*test);
    // 
    //
    // test->seter("qata", 20);
    // delete test;
    // // test2 = test;
    // std::cout<< test2->geter(20)<<std::endl;
    // 
    // delete test2;
    return 0;
}

