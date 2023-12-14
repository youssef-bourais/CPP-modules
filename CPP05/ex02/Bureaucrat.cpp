/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:34:14 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 11:48:12 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(0) 
{ 
    /* std::cout<< "default constructor called"<<std::endl;  */
} 

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
    if (grade > 150)
    {
        throw GradeTooLowException(); 
    }
    else if(grade < 1) 
    {
        throw GradeTooHighException();
    }
    /* std::cout<<"initialized constructor called"<<std::endl; */
}

Bureaucrat::~Bureaucrat()
{
    /* std::cout<< "deconstructor called"<<std::endl; */
}

Bureaucrat::Bureaucrat(Bureaucrat const &src):_name(src._name)
{
    /* std::cout<< "copy constructor called"<<std::endl; */
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    /* std::cout<< "copy assignment opetator called"<<std::endl; */
    if(this != &src)
    {
        _grade = src._grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const 
{
    return this->_grade;
}

void Bureaucrat::set_grade(int grade)
{
    if (grade > 150)
    {
        throw GradeTooLowException(); 
    }
    else if(grade < 1) 
    {
        throw GradeTooHighException();
    }
    this->_grade = grade;
}

void Bureaucrat::increment_grade()
{
    if(getGrade() > 1)
        this->_grade--;
    else 
        throw GradeTooHighException();
}

void Bureaucrat::decrement_grade()
{
    if(getGrade() < 150)
        this->_grade++;
    else 
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade()<<std::endl;
	return (os);
}


void Bureaucrat::signForm(AForm &src) const
{
    try 
    {
        src.beSigned(*this); 
        std::cout << this->getName() << ": signed " << src.get_name() << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout<< this->getName() << " couldn’t sign " << src.get_name() << " because " <<e.what()<<std::endl;
    }
}

void  Bureaucrat::executeForm(AForm const &form)
{
	try 
    {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.get_name() << std::endl;
	}
	catch (std::exception &e)
    {
		std::cout << this->getName() << " couldn't execute " << form.get_name() << " because " << e.what() << std::endl;
	}
}
