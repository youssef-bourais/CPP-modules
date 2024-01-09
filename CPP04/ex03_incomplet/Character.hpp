/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:21:11 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 17:13:39 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria* inventory[4];
        std::string name;
    public:
        Character();
        ~Character();
        Character(std::string const &name);
        Character &operator=(Character const &s);
        Character(Character const &s);
     
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif
