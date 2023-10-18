/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:57:19 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 17:57:06 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal* array[4];
    int i;

    for(i = 0; i < 4;i++)
    {
        if(i % 2 != 0)
            array[i] = new Cat;
        else
            array[i] = new Dog;
    }


    for(i = 0;i < 4;i++)
        array[i]->makeSound();
    for(i = 0;i < 4;i++)
        delete array[i]; 
    return 0;
}


