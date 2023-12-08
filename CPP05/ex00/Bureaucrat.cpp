/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:34:14 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/08 10:46:16 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(0) { std::cout<< "default constructor called"<<std::endl; } Bureaucrat::Bureaucrat(const std::string name):_name(name), _grade(0)
{
    std::cout<<"initialized constructor called"<<std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< "deconstructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src):_name(src._name)
{
    std::cout<< "copy constructor called"<<std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    std::cout<< "copy assignment opetator called"<<std::endl;
    if(this != &src)
    {
        /* *const_cast<std::string*>(&_name) = src._name; */
        _grade = src._grade;
    }
    return *this;
}

std::string Bureaucrat::get_name() const
{
    return this->_name;
}

int Bureaucrat::get_grade() const
{
    return this->_grade;
}

/**/
/* void Bureaucrat::set_name(std::string const name) */
/* { */
/*     *const_cast<std::string*>(&this->_name) = name; */
/* } */
/**/

void Bureaucrat::set_grade(int grade)
{
    if(grade > 0 && grade <= 150)
        this->_grade = grade;
    else if (grade > 150)
    {
        throw 1;
    }
    else {
        throw 2;
    }
}



