/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:50:55 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 11:47:39 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():_name("hello"), _signed(false), _grade_to_sign(0), _grade_to_exucute(0)
{
    /* std::cout << "default constructor called for Form class"<<std::endl; */
}

AForm::AForm(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exucute) : _name(name),_signed(sign), _grade_to_sign(grade_to_sign), _grade_to_exucute(grade_to_exucute) 
{
    if (grade_to_sign > 150 || grade_to_exucute > 150)
    {
        throw GradeTooLowException(); 
    }
    else if(grade_to_sign < 1 || grade_to_exucute < 1) 
    {
        throw GradeTooHighException();
    }
    /* std::cout << "initialized constructor called for Form class"<< std::endl; */
}

AForm::~AForm()
{
    /* std::cout << "deconstructor called for Form class"<<std::endl; */
}

AForm::AForm(AForm const &src):_name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_exucute(src._grade_to_exucute)
{
    /* std::cout << "copy constructor called for Form class"<< std::endl; */
    *this = src;
}

AForm &AForm::operator=(AForm const &src)
{ 
    /* std::cout<< "copy assignment opetator called for Form class"<<std::endl; */
    if(this != &src)
        _signed = src._signed;
    return *this;
} 

std::string AForm::get_name() const
{
    return this->_name;
}

bool AForm::get_sign() const
{
    return this->_signed;
}

int AForm::get_grade_to_sign() const
{
    return this->_grade_to_sign;
}

int AForm::get_grade_to_exucute() const
{
    return this->_grade_to_exucute;
}

std::ostream &operator<<(std::ostream &os, const AForm &src)
{
    os<<src.get_name()<<" signed: "<<src.get_sign()<<", grade to signe: "<<src.get_grade_to_sign()<<", grade to exucute: "<<src.get_grade_to_exucute()<<std::endl;
    return os;
}

void AForm::beSigned(const Bureaucrat &src)
{
    if (src.getGrade() <= this->_grade_to_sign) 
    {
        this->_signed = true;
    }
    else 
    {
        throw GradeTooLowException(); 
    }
}



