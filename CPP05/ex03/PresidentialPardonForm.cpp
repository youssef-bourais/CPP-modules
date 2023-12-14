/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:52:37 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 12:06:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5), _target("")
{
    /* std::cout << "default constructor for PresidentialPardonForm called"<<std::endl; */
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", false, 25, 5), _target(target) 
{
    /* std::cout << "default constructor for PresidentialPardonForm called"<<std::endl; */
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    /* std::cout << "deconctructor called for PresidentialPardonForm"<<std::endl; */
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
    /* std::cout<<"copy constructor for PresidentialPardonForm called"<<std::endl; */
    if (this != &src) 
       *this = src; 
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    if(this != &src)
    {
        this->_target = src._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign()) 
    {
        throw AForm::FormNotSignedException();
    }
    else if(executor.getGrade() > this->get_grade_to_exucute())
    {
        throw AForm::GradeTooLowException();
    }
    else 
    {
        std::cout<< _target << " has been pardoned by Zafod Beeblebrox."<<std::endl;
    }
}

std::string PresidentialPardonForm::get_target() const
{
    return this->_target;
}

