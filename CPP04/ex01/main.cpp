/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:57:19 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:37:55 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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
    return 0;
}


