/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:39:29 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 13:12:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("first");
    ClapTrap b("second");

    std::string test= "youssef";
    b.attack(test);
    b.takeDamage(10);
    b.beRepaired(5);

    a = b;
    a.attack(test);
    a.takeDamage(5);
    a.beRepaired(5);


}
