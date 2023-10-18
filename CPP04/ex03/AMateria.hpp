/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:49 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 18:47:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const &type);
        std::string const &getType() const; 
        AMateria &operator=(AMateria const &s);

        AMateria(AMateria const &s);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif


