/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/09 18:58:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() 
{ 
    Bureaucrat a("yassine"); 

    try 
    {
        a.set_grade(144);
        a.set_grade(300);
        std::cout<<a;
        /* a.increment_grade(); */
        /* a.decrement_grade(); */
    } 
    catch (const Bureaucrat::GradeTooHighException &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    } 
}

