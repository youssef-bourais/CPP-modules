/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:29:42 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 07:08:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char *av[])
{
    if(ac == 2) 
        ScalarConverte::convert(av[1]);
    else
        std::cout<<"no argument passed"<<std::endl;
    return(0);
}

