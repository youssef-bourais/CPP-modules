/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 03:21:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main() 
{
    try 
    { 
        Form form("form1", false, 23, 33);
        Bureaucrat bureaucrat("Bureaucrat", 19);
        
        std::cout << form;
        std::cout << bureaucrat;

        bureaucrat.signForm(form);
        form.beSigned(bureaucrat);
    }
    catch (const std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}



