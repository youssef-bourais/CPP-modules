/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:05:28 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 15:43:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *dog_brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog const &src);
        Dog &operator=(Dog const &s);
        
        void makeSound() const; 
};

#endif


