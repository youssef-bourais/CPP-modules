/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 13:45:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"


int main() 
{ 
    try 
    {
        Bureaucrat a("one", 4); 
        a.set_grade(49);
        a.increment_grade();
        std::cout<<a;
        a.increment_grade();
        a.decrement_grade();
    } 
    catch (std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

