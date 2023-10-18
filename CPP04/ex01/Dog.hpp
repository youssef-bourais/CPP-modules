/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:05:28 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 06:55:37 by ybourais         ###   ########.fr       */
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
        void makeSound() const; 
        Dog &operator=(Animal const &s);
        Dog &operator=(Dog const &s);
};

#endif


