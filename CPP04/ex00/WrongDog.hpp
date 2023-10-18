/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:38:34 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 02:40:32 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        ~WrongDog();
        void makeSound() const; 



};

#endif


