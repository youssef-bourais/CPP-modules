/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:29:24 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 03:21:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form():_name(""), _sign(false), _grade_to_sign(0), _grade_to_exucute(0)
{
    std::cout << "default constructor called for Form class"<<std::endl;
}

Form::Form(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exucute) : _name(name),_sign(sign), _grade_to_sign(grade_to_sign), _grade_to_exucute(grade_to_exucute) 
{
    if (grade_to_sign > 150 || grade_to_exucute > 150)
    {
        throw GradeTooLowException(); 
    }
    else if(grade_to_sign < 1 || grade_to_exucute < 1) 
    {
        throw GradeTooHighException();
    }
    std::cout << "initialized constructor called for Form class"<< std::endl;
}

Form::~Form()
{
    std::cout << "deconstructor called for Form class"<<std::endl;
}

Form::Form(Form const &src):_name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_exucute(src._grade_to_exucute)
{
    std::cout << "copy constructor called for Form class"<< std::endl;
    *this = src;
}

Form &Form::operator=(Form const &src)
{ 
    std::cout<< "copy assignment opetator called for Form class"<<std::endl;
    if(this != &src)
        _sign = src._sign;
    return *this;
} 

std::string Form::get_name() const
{
    return this->_name;
}

bool Form::get_sign() const
{
    return this->_sign;
}

int Form::get_grade_to_sign() const
{
    return this->_grade_to_sign;
}

int Form::get_grade_to_exucute() const
{
    return this->_grade_to_exucute;
}


std::ostream &operator<<(std::ostream &os, const Form &src)
{
    os<<src.get_name()<<" signed: "<<src.get_sign()<<", grade to signe: "<<src.get_grade_to_sign()<<", grade to exucute: "<<src.get_grade_to_exucute()<<std::endl;
    return os;
}


void Form::beSigned(const Bureaucrat &src)
{
    if (src.getGrade() <= this->_grade_to_sign) 
    {
        this->_sign = true;
    }
    else 
    {
        throw GradeTooLowException(); 
    }
}



