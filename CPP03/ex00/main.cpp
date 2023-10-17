/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:39:29 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 20:43:44 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap b("second");

    std::string test= "somthing";
    b.attack(test);
    b.takeDamage(10);
    b.beRepaired(5);
}
