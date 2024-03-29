/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:29:32 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 03:21:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _sign;
        const int _grade_to_sign;
        const int _grade_to_exucute;
    public:
        Form();
        Form(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exucute);
        ~Form();
        Form(Form const &src);
        Form &operator=(Form const &src);

        std::string get_name() const;
        bool get_sign() const;
        int get_grade_to_sign() const;
        int get_grade_to_exucute() const;

        class GradeTooHighException; 
        class GradeTooLowException;

        void beSigned(const Bureaucrat &src);
};

class Form::GradeTooHighException : public std::exception
{
    const char *what () const throw()
    {
        return "grade to high";
    }
};

class Form::GradeTooLowException : public std::exception 
{
    const char *what () const throw() 
    { 
        return "grade to low";
    }
};



std::ostream &operator<<(std::ostream &os, const Form &src);


#endif

