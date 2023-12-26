/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 02:36:14 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 05:22:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
    srand(time(0)); 
   
    Base *one = new A();
    Base *two = generate();
	

    identify(one);
    identify(*one);
    
    identify(two);
    identify(*two);


    delete one;
    if(two)
        delete two;

}
