/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:39:29 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 20:24:02 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    // FragTrap one("ONE");
    // 
    // one.attack("somthing");
    // one.takeDamage(10);
    // one.beRepaired(10);
    // one.highFivesGuys();;
    
    FragTrap *one = new FragTrap("son");
    
    one->attack("somthing");
    one->takeDamage(10);
    one->beRepaired(10);
    one->highFivesGuys();
    delete one;
}
