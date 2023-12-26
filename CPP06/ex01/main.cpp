/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:52:20 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/26 02:32:33 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


int main()
{
    Data somthing;
    somthing.string = "hellooo";

    uintptr_t U_integer = Serialize::serialize(&somthing);
	Data *somthing2 = Serialize::deserialize(U_integer);

    if(somthing2 == &somthing)
        std::cout << somthing2->string<< std::endl;
	return (0);
}



