/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:02:22 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 17:13:05 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
       Brain *cat_brain; 
    public:
        Cat();
        ~Cat();
        Cat(const Cat& src);
        Cat &operator=(Cat const &s);

        void makeSound() const;
        void seter(std::string str, int i);
        std::string geter(int i);
};



#endif


