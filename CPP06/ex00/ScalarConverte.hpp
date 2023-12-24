/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/24 01:48:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>
#include <sstream>

class ScalarConverte
{
    private:
        ScalarConverte();
    public:
        ~ScalarConverte();
        static void convert(std::string str);
};



#endif

