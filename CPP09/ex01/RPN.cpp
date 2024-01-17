/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:27:22 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/17 19:07:47 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int NumberOfNumberAndOperator(char *av)
{
    int i = 0;
    int nbr = 0;
    while(av[i] != '\0')
    {
        if(std::isdigit(av[i]) != 0 || av[i] == MULTIPLY 
            || av[i] == DIVIDE || av[i] == SUBTRACT || av[i] == ADD)
            nbr++;
        i++;
    }
    return nbr;
}

bool PerformOperation(char operation, std::stack<int>& stack) 
{
    if (stack.size() < 2) 
    {
        std::cout << "Error: Not enough Numbers in Stack for operation "<< std::endl;
        return false;
    }
    int Value2 = stack.top();
    stack.pop();
    int Value1 = stack.top();
    stack.pop();

    switch (operation) 
    {
        case MULTIPLY:
            stack.push(Value1 * Value2);
            break;
        case ADD:
            stack.push(Value1 + Value2);
            break;
        case SUBTRACT:
            stack.push(Value1 - Value2);
            break;
        case DIVIDE:
            if (Value2 == 0) 
            {
                std::cout << "Error: Cannot Divide By Zero!" << std::endl;
                return false;
            }
            stack.push(Value1 / Value2);
            break;
    }
    return true;
}

bool CalculateRPN(char *av) 
{
    std::stack<int> stack;
    char c;
    std::istringstream num(av);

    int N = NumberOfNumberAndOperator(av);

    int i = 0;
    while (i < N) 
    {
        num >> c;
        if (std::isdigit(c))
            stack.push(c - '0');
        else if (c == MULTIPLY || c == ADD || c == SUBTRACT || c == DIVIDE) 
        {
            if (!PerformOperation(c, stack))
                return false;
        } 
        else 
        {
            std::cout << "Error: Invalid operation: " << c<<std::endl;
            return false;
        }
        i++;
    }
    if (!stack.empty())
        std::cout << "Result: " << stack.top() << std::endl;
    return true;
}

