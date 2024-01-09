/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:49 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 13:18:38 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const &type);
        AMateria &operator=(AMateria const &s);
        AMateria(AMateria const &s);
        
        std::string const &getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif


