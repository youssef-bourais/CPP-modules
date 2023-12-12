/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:21 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/12 10:48:23 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &src);

        std::string getName() const; 
        int getGrade() const;
        void set_name(std::string const name);
        void set_grade(int grade);
        void increment_grade();
        void decrement_grade();
        void signForm(Form &src) const; 

        class GradeTooHighException; 
        class GradeTooLowException;
};

class Bureaucrat::GradeTooHighException : public std::exception
{
    const char *what () const throw()
    {
        return "grade to high";
    }
};

class Bureaucrat::GradeTooLowException : public std::exception
{
    const char *what () const throw()
    {
        return "grade to low";
    }
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src);

#endif

