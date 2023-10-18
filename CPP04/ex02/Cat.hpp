/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:02:22 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:02:11 by ybourais         ###   ########.fr       */
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
        void makeSound() const;
        Cat &operator=(Cat const &s);
        void set(std::string str);
        std::string geter();
};



#endif


