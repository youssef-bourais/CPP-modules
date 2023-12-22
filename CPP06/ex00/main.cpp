/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:29:42 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/22 20:41:20 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ScalarConverte.hpp" */

#include <iostream>


class ScalarConverte
{
    private:
        ScalarConverte();
    public:
        ~ScalarConverte();
        static ScalarConverte *convert(std::string str);
        void print();

};



ScalarConverte::ScalarConverte()
{
    std::cout<< "default constructor called"<<std::endl;
}

ScalarConverte::~ScalarConverte()
{
    std::cout<< "deconstracter called"<< std::endl;
}

ScalarConverte *ScalarConverte::convert(std::string str)
{
    std::cout<< str<<std::endl;
    return new ScalarConverte();
}

void ScalarConverte::print()
{
    std::cout << "DONE"<<std::endl;
}

int main()
{
    ScalarConverte *p = ScalarConverte::convert("hello from ther world");
    p->print();

}

