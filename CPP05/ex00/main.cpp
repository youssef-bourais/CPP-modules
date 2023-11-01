/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/11/01 19:58:57 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"



/**/
/* int devide(int a, int b) */
/* { */
/*     if(b == 0) */
/*         throw 1; */
/*     return a/b; */
/* } */
/**/




int main()
{

    Bureaucrat a;

    std::cout<< a.get_name()<<std::endl;;
    /* try  */
    /* { */
    /*     std::cout<< devide(10, 0)<<std::endl; */
    /* }  */
    /* catch (int e)  */
    /* { */
    /*     std::cerr<< "u cant devide by 0"<<std::endl;  */
    /* } */
}

