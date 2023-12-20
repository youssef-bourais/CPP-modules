/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 16:11:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main() 
{   
    Intern intern;

    AForm* form1 = intern.makeForm("ShrubberyCreationForm", "one");
    AForm* form2 = intern.makeForm("PresidentialPardonForm", "two");
    AForm* form3 = intern.makeForm("newname", "three");

    if (form1) 
    {
        delete form1;
    }
    if (form2) 
    {
        delete form2;
    }
    if (form3) 
    {
        delete form3;
    }
    return 0;
}


