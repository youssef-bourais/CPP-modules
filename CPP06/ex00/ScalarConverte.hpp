/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/20 14:06:32 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>
#include <ostream>

class ScalarConverte
{
    private:
        ScalarConverte();
    public:
        ~ScalarConverte();
        ScalarConverte(ScalarConverte const &src);
        ScalarConverte &operator=(ScalarConverte const &src);

        void convert(std::string str);
};

ScalarConverte::ScalarConverte()
{
    std::cout<< "default constructor called"<<std::endl;
}

ScalarConverte::~ScalarConverte()
{
    std::cout<< "deconstracter called"<< std::endl;
}

ScalarConverte::ScalarConverte(ScalarConverte const &src)
{
    std::cout<< "copy constructor called"<<std::endl;
}

ScalarConverte &ScalarConverte::operator=(ScalarConverte const &src)
{

}



#endif

