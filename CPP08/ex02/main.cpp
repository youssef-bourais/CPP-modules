/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 08:13:54 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/04 00:59:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"




int main()
{
    MutantStack<int> A;
    std::stack<int>::container_type::iterator itrBegin;
    std::stack<int>::container_type::iterator itrEnd;
    
    int i = 1;
    while(i <= 30)
        A.push(i++);
    
    itrBegin = A.begin();
    itrEnd = A.end();
    while(itrBegin != itrEnd)
    {
        std::cout<< *itrBegin<<" ";
        itrBegin++;
    }
    std::cout<<'\n';
}
