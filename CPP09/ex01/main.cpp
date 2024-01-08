/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 04:23:34 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/08 07:56:42 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

bool performOperation(char operation, std::stack<int>& stack) 
{
    if (stack.size() < 2) 
    {
        std::cout << "Not enough operands for operation: " << operation << std::endl;
        return false;
    }
    int Value2 = stack.top();
    stack.pop();
    int Value1 = stack.top();
    stack.pop();

    switch (operation) 
    {
        case '*':
            stack.push(Value1 * Value2);
            break;
        case '+':
            stack.push(Value1 + Value2);
            break;
        case '-':
            stack.push(Value1 - Value2);
            break;
        case '/':
            if (Value2 == 0) 
            {
                std::cout << "Cannot Divide By Zero!" << std::endl;
                return false;
            }
            stack.push(Value1 / Value2);
            break;
    }
    return true;
}

bool calculateRPN(char *av) 
{
    std::stack<int> stack;
    std::istringstream num(av);

    int N = NumberOfNumberAndOperator(av);

    int i = 0;
    while (i < N) 
    {
        char c = 0;
        num >> c;
        if (std::isdigit(c))
            stack.push(c - '0');
        else if (c == '*' || c == '+' || c == '-' || c == '/') 
        {
            if (!performOperation(c, stack))
                return false;
        } 
        else 
        {
            std::cout << "Invalid operation: " << c<<std::endl;
            return false;
        }
        i++;
    }
    if (!stack.empty())
        std::cout << "Result: " << stack.top() << std::endl;
    return true;
}

int main(int ac, char* av[]) 
{
    std::string str;

    if (ac != 2) 
    {
        std::cout << "Please Provide Valid argument" << std::endl;
        return 0;
    }
    if (!calculateRPN(av[1])) 
        return 1;
    return 0;
}


/* int main(int ac, char *av[]) */
/* { */
/*     std::stack<int> stack; */
/*     std::string str; */
/*     if(ac == 2) */
/*         str = av[1]; */
/*     if(ac != 2 || str.find(av[1], '.') != std::string::npos) */
/*     { */
/*         std::cout<< "Please Provide Valid argument"<<std::endl; */
/*         return 0; */
/*     } */
/*     int N =  NumberOfNumberAndOperator(av[1]); */
/*     std::istringstream num(av[1]); */
/**/
/*     int i = 0; */
/*     while (i < N)  */
/*     { */
/*         char c = 0; */
/*         num >> c; */
/*         if(std::isdigit(c)) */
/*             stack.push(c - '0'); */
/*         else if(!stack.empty() && c == '*')  */
/*         { */
/*             int Value1 = stack.top(); */
/*             stack.pop(); */
/*             if(!stack.empty()) */
/*             { */
/*                 int Value2 = stack.top(); */
/*                 stack.pop(); */
/*                 stack.push(Value1*Value2);  */
/*             } */
/*             else  */
/*             { */
/*                  std::cout << "Not an RPN"<<std::endl; */
/*                  return 0; */
/*             } */
/*         } */
/*         else if (!stack.empty() && c == '+')  */
/*         {     */
/**/
/*             int Value1 = stack.top(); */
/*             stack.pop(); */
/*             if(!stack.empty()) */
/*             { */
/*                 int Value2 = stack.top(); */
/*                 stack.pop(); */
/*                 stack.push(Value1+Value2);  */
/*             } */
/*             else  */
/*             { */
/*                  std::cout << "Not an RPN"<<std::endl; */
/*                  return 0; */
/*             } */
/*         } */
/*         else if (!stack.empty() && c == '-')  */
/*         { */
/*             int Value1 = stack.top(); */
/*             stack.pop(); */
/*             if(!stack.empty()) */
/*             { */
/*                 int Value2 = stack.top(); */
/*                 stack.pop(); */
/*                 stack.push(Value2-Value1);  */
/*             } */
/*             else  */
/*             { */
/*                  std::cout << "Not an RPN"<<std::endl; */
/*                  return 0; */
/*             } */
/**/
/*         } */
/*         else if (!stack.empty() && c == '/')  */
/*         { */
/*             int Value1 = stack.top(); */
/*             stack.pop(); */
/*             if(!stack.empty()) */
/*             { */
/*                 int Value2 = stack.top(); */
/*                 if(!Value2) */
/*                 { */
/*                     std::cout<< "Cannot Devide By Zero!"<<std::endl; */
/*                     return 0; */
/*                 } */
/*                 stack.pop(); */
/*                 stack.push(Value1/Value2);  */
/*             } */
/*             else  */
/*             { */
/*                  std::cout << "Not an RPN"<<std::endl; */
/*                  return 0; */
/*             } */
/*         } */
/*         else  */
/*         { */
/*             std::cout << "Bad inpute"<<std::endl;  */
/*             return 0; */
/*         } */
/*         i++; */
/*     }     */
/*     if (!stack.empty())  */
/*         std::cout << "Result: " << stack.top() << std::endl; */
/* } */
/**/
/**/
