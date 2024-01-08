/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 03:47:51 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>


int f_main() 
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

int main()
{



    f_main();
    system("leaks Bureaucrat");
}
