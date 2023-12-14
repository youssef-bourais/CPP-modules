/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:52:18 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 12:04:34 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45), _target("")
{
    /* std::cout << "default constructor for RobotomyRequestForm called"<<std::endl; */
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", false, 72, 45), _target(target) 
{
    /* std::cout << "default constructor for RobotomyRequestForm called"<<std::endl; */
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    /* std::cout << "deconctructor called for RobotomyRequestForm"<<std::endl; */
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
    /* std::cout<<"copy constructor for RobotomyRequestForm called"<<std::endl; */
    if (this != &src) 
       *this = src; 
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    if(this != &src)
    {
        this->_target = src._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int static n;
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
        /* std::srand(std::time(0)); */
        std::cout << "Drilling noises..." << std::endl;
        /* int nbr = std::rand(); */
        if (n % 2 == 0) 
        {
            std::cout << _target << " has been robotomized successfully." << std::endl;
        } 
        else 
        {
            std::cout << "Robotomy on " << _target << " failed." << std::endl;
        }
        n++;
    }
}

std::string RobotomyRequestForm::get_target() const
{
    return this->_target;
}

