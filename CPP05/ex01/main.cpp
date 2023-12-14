/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 13:50:47 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main() 
{
    try 
    { 
        Form form("one", false, 23, 33);
        Bureaucrat bureaucrat("test", 19);
        
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

