/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:02:22 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 15:43:17 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
       Brain *cat_brain; 
    public:
        Cat();
        ~Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &s);
        
        void makeSound() const;
        std::string geter(int i);
        void seter(std::string str, int i);
};


#endif


