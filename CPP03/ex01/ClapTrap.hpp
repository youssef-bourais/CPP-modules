/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:21 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 16:59:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        static int _Hit_points;
        static int _Energy_points;
        static int _Attack_damage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &f);
        void attack(const std::string& target);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
};


#endif
