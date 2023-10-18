/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:26:13 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 17:46:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>


class AAnimal
{
    private:

    protected:
        std::string type;
    public:
         AAnimal(void);
        virtual~AAnimal(void);
        virtual AAnimal &operator=(AAnimal const &s);
        AAnimal(AAnimal const &src);
      
        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string type);
};












#endif


