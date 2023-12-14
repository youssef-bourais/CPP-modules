/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:32 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 14:46:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

    public:
	    Intern();
	    Intern(const Intern &src);
	    Intern &operator=(const Intern &src);
	    ~Intern();

	    AForm* makeForm(std::string const name, std::string const target);
};





#endif

