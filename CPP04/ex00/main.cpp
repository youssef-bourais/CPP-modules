/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:57:19 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 03:41:29 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

    const Animal* meta = new Animal();
    const Animal* cate = new Cat();
    const Animal* doge = new Dog();

    std::cout << meta->getType()  << std::endl;
    std::cout << cate->getType()  << std::endl; 
    std::cout << doge->getType()  << std::endl;

    meta->makeSound(); 
    cate->makeSound();
    doge->makeSound();
   
    delete meta;
    delete cate;
    delete doge;
    
    std::cout<< "======================================="<<std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongcate = new WrongCat();

    std::cout << wrongmeta->getType()  << std::endl;
    std::cout << wrongcate->getType()  << std::endl; 

    wrongmeta->makeSound(); 
    wrongcate->makeSound();

    delete wrongmeta;
    delete wrongcate;
    
    return 0;
}



