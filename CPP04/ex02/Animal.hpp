/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:26:13 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 06:24:49 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
    private:

    protected:
        std::string type;
    public:
         Animal(void);
        virtual~Animal(void);
        virtual Animal &operator=(Animal const &s);
        Animal(Animal const &src);
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};












#endif


