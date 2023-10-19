/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:05:28 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:14:25 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *dog_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& src);
        Dog &operator=(Dog const &s);
        
        void makeSound() const; 
         std::string geter(int i);
        void seter(std::string str, int i);

};

#endif


