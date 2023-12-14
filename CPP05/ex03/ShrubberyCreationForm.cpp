/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:51:49 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 12:58:52 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137), _target("")
{
    /* std::cout << "default constructor for ShrubberyCreationForm called"<<std::endl; */
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(target) 
{
    /* std::cout << "default constructor for ShrubberyCreationForm called"<<std::endl; */
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    /* std::cout << "deconctructor called for ShrubberyCreationForm"<<std::endl; */
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
    /* std::cout<<"copy constructor for ShrubberyCreationForm called"<<std::endl; */
    if (this != &src) 
       *this = src; 
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    if(this != &src)
    {
        this->_target = src._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
        std::ofstream ofs(get_target() + "_shrubbery", std::ios::out);
        if (ofs.is_open()) 
        {
            ofs << "       ###" << std::endl;
            ofs << "      #o###" << std::endl;
            ofs << "    #####o###" << std::endl;
            ofs << "   #o#\\##/###" << std::endl;
            ofs << "    ###\\/#o#" << std::endl;
            ofs << "     # }{  #" << std::endl;
            ofs << "       }{" << std::endl;
            ofs.close();
            std::cout<<"file created"<<std::endl;
        }
        else 
        {
            std::cerr<< "error : file not created"<<std::endl; 
        }
    }
}

std::string ShrubberyCreationForm::get_target() const
{
    return this->_target;
}

