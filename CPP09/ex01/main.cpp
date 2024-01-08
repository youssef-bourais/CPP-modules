/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:23:34 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 06:25:45 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <sstream>

#include <stack>



int NumberOfNumberAndOperator(char *av)
{
    int i = 0;
    int nbr = 0;
    while(av[i] != '\0')
    {
        if(std::isdigit(av[i]) != 0 || av[i] == '*' 
            || av[i] == '/' || av[i] == '-' || av[i] == '+')
            nbr++;
        i++;
    }
    return nbr;
}


int main(int ac, char *av[])
{
    std::stack<int> stack;
    std::string str = av[1];
    if(ac != 2 || str.find(av[1], '.') != std::string::npos)
    {
        std::cout<< "Please Provide Valid argument"<<std::endl;
        return 0;
    }
    int N =  NumberOfNumberAndOperator(av[1]);
    std::istringstream num(av[1]);
    int i = 0;
    std::string holder;
    char s[N];
    while (i < N) 
    {
        num >> s[i];
        i++;
    }
    std::cout << s<<std::endl;

}
