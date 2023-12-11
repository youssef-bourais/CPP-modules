/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:29:32 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/11 13:22:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_exucute;
    public:
        Form();
        Form(const std::string name, int grade);
        ~Form();
        Form(Form const &src);
        Form &operator=(Form const &src);
};



#endif

