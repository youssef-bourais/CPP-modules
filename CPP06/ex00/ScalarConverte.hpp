/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 00:46:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP


#include <iostream> //std

class ScalarConverte
{
    private:
        ScalarConverte();
    public:
        ~ScalarConverte();
        static void convert(std::string str);
};

int calculate_presicion(int len, double nbr);
int is_number(const std::string s, double *holder);
void print_error(bool inf);
void print_char(double nbr);
void print_int(double nbr);
void print_float(double nbr, int len, bool with_dot);
void print_double(double nbr, int len, bool with_dot);
void print_result(double nbr, std::string str);
int calculate_presicion(int len, double nbr);

#endif

