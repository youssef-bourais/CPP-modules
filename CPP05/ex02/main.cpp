/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/12 11:09:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int main() 
{
    try 
    {
        AForm a("youssef", true, 160, -1);
        std::cout<<a;
    }
    catch (const std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

