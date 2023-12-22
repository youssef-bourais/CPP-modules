/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/22 20:37:16 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>

class ScalarConverte
{
    private:
        ScalarConverte();
    public:
        ~ScalarConverte();
        static ScalarConverte convert(std::string str);
        void print();

};



#endif

