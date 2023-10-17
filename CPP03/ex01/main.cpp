/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:39:29 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 19:40:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap *one = new ScavTrap("ussef");

    one->attack("somthing");
    one->takeDamage(10);
    one->beRepaired(10);
    one->guardGate();
    delete one;
    //
    // ScavTrap two("uness");
    //
    // two.attack("anything");
    // two.takeDamage(10);
    // two.beRepaired(10);
    // two.guardGate();
}
