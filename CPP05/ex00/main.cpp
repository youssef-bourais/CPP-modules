/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/08 13:58:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("yassine");
    
    /* Bureaucrat b; */
    /* b = a; */
    /* std::cout<< b.get_Name()<<std::endl;; */

    try 
    {
        //a.set_grade(-4);
        a.set_grade(149);
        a.increment_grade();
        a.decrement_grade();
        a.decrement_grade();
        a.decrement_grade();
        std::cout<< a.getGrade()<<std::endl;
    } 
    catch (const Bureaucrat::GradeTooHighException &e) 
    {
        std::cerr<< "GradeTooHighException"<<std::endl; 
    }
    catch (const Bureaucrat::GradeTooLowException &e) 
    {
        std::cerr<< "GradeTooLowException"<<std::endl; 
    }
    catch (const Bureaucrat::GradeOutofRange &e)
    {
        std::cerr<< "GradeOutofRange"<<std::endl; 
    }
}

