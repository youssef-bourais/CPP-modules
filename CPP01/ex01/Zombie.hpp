/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:54:44 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 11:00:04 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    
    private:
        
        std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );


#endif

