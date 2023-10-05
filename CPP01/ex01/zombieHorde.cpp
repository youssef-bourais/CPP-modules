/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:14:24 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/27 20:15:16 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *zombieHorde(int N, std::string name)
{
    Zombie *hord = new Zombie[N];
    
    int i = 0;
    while(i < N)
    {
        hord[i] = Zombie(name);
        i++;
    }
    return hord;
}

