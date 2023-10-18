/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:21 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 07:51:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _Hit_points;
        int _Energy_points;
        int _Attack_damage;

    public:
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &f);
        void attack(const std::string& target);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
};


#endif
