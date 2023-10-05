/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:29:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 15:23:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:

        std::string name;
        Weapon *_Weapon;

    public:
        HumanB(std::string na);
        void setWeapon(Weapon &w);
        void attack();
};


#endif

