/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:57:19 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:43:31 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"


int main()
{
   //
   //  const Animal* meta = new Animal();
   //  const Animal* cate = new Cat();
   //  const Animal* doge = new Dog();
   //
   //  std::cout << meta->getType() << " " << std::endl;
   //  std::cout << cate->getType() << " " << std::endl; 
   //  std::cout << doge->getType() << " " << std::endl;
   // 
   //  meta->makeSound(); 
   //  cate->makeSound();
   //  doge->makeSound();
   //  
    
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* cate = new WrongCat();
    const WrongAnimal* doge = new WrongDog();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << cate->getType() << " " << std::endl; 
    std::cout << doge->getType() << " " << std::endl;
   
    meta->makeSound(); 
    cate->makeSound();
    doge->makeSound();
  
    return 0;
}












