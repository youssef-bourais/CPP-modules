/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/08 10:47:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"


int devide(int a, int b)
{
    if(b == 0)
        throw 1;
    return a/b;
}


int main()
{
    Bureaucrat a("yassine");
    
    Bureaucrat b;
    b = a;
    std::cout<< b.get_name()<<std::endl;;

    /* try  */
    /* { */
    /*     a.set_grade(-4); */
    /* }  */
    /* catch (int e)  */
    /* { */
    /*     std::cerr<< "GradeTooHighException"<<std::endl;  */
    /* } */
}

