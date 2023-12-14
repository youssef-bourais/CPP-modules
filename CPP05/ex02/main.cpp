/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 13:41:38 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() 
{    
	Bureaucrat Bureaucrat("hello", 36);
    
    ShrubberyCreationForm Shrubbery("one");         // grade to signe the form : 145, grade to exucute the form : 137;
	RobotomyRequestForm roboto("two");              // grade to signe the form : 72, grade to exucute the form : 45;
	PresidentialPardonForm presidential("three");   // grade to signe the form : 25, grade to exucute the form : 5;

	try 
	{
	    Bureaucrat.signForm(Shrubbery); 
	    Bureaucrat.executeForm(Shrubbery);

	    Bureaucrat.signForm(roboto);
	    Bureaucrat.executeForm(roboto);

	    Bureaucrat.signForm(presidential);
	    Bureaucrat.executeForm(presidential);
	} 
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}

