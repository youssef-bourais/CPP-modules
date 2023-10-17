/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:26:13 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/17 16:38:30 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
    private:

    protected:

    public:
        Animal(void);
        ~Animal(void);
        Animal &operator=(Animal const &s);
        Animal(Animal const &src);


};


Animal::Animal(Animal const &src)
{
    *this = src;
}

Animal & Animal::operator=(Animal const &s)
{
    if(this != &s)
    {

    }
    return *this;
}





#endif


