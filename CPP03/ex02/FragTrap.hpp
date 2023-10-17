/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:23:01 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/16 20:10:12 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif 
