/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/13 16:44:31 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() 
{
    RobotomyRequestForm b("done");

    Bureaucrat test("hello", 36);
    try 
    {
        b.beSigned(test);

        b.execute(test);
    } 
    catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}

