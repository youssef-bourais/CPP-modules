/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:35:44 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/27 15:49:34 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    private:

        std::string _name;

    public:

        Zombie(std::string name): _name(name)
        {
        }
        ~Zombie()
        {
            std::cout<<"distractore called for " << _name <<std::endl;
        }
        void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif

