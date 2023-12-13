/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:51:22 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/12 18:39:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade_to_sign;
        const int _grade_to_exucute;
    public:
        AForm();
        AForm(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exucute);
        virtual ~AForm();
        AForm(AForm const &src);
        AForm &operator=(AForm const &src);

        std::string get_name() const;
        bool get_sign() const;
        int get_grade_to_sign() const;
        int get_grade_to_exucute() const;

        class GradeTooHighException; 
        class GradeTooLowException;
        class FormNotSignedException; 

        void beSigned(const Bureaucrat &src);
        virtual void execute(Bureaucrat const &executor) const = 0;
};

class AForm::GradeTooHighException : public std::exception
{
    const char *what () const throw()
    {
        return "grade to high";
    }
};

class AForm::GradeTooLowException : public std::exception 
{
    const char *what () const throw() 
    { 
        return "grade to low";
    }
};

class AForm::FormNotSignedException : public std::exception 
{
    const char *what () const throw() 
    { 
        return "Form not signed";
    }
};

std::ostream &operator<<(std::ostream &os, const AForm &src);


#endif

