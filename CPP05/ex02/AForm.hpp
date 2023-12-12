/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:51:22 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/12 11:07:27 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _sign;
        const int _grade_to_sign;
        const int _grade_to_exucute;
    public:
        AForm();
        AForm(const std::string name, bool sign, const int grade_to_sign, const int grade_to_exucute);
        ~AForm();
        AForm(AForm const &src);
        AForm &operator=(AForm const &src);

        std::string get_name() const;
        bool get_sign() const;
        int get_grade_to_sign() const;
        int get_grade_to_exucute() const;

        class GradeTooHighException; 
        class GradeTooLowException;

        void beSigned(const Bureaucrat &src);
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



std::ostream &operator<<(std::ostream &os, const AForm &src);


#endif

