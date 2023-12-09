/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/09 19:14:40 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() 
{ 
    Bureaucrat a("yassine"); 
    Bureaucrat b("youssef"); 
    
    try 
    {
        a.set_grade(300);
        a.increment_grade();
        std::cout<<a;
        /* a.increment_grade(); */
        /* a.decrement_grade(); */
    } 
    catch (std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try 
    {
        b.set_grade(4);
        b.increment_grade();
        std::cout<<b;
        /* a.increment_grade(); */
        /* a.decrement_grade(); */
    } 
    catch (std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

