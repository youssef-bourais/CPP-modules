/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:14:35 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 15:25:17 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string type);
        ~Ice();
        Ice(const Ice& src);
        Ice &operator=(Ice const &s);
   
};

Ice::Ice()
{
    std::cout<< "constructor for ice called"<<std::endl;
}


#endif


