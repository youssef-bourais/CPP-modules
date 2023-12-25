/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 00:35:31 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iomanip>
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

