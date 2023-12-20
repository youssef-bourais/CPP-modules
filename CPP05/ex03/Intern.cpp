/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:37 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/14 16:06:53 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{ 
    std::cout<< "default constructor for Intern called"<<std::endl;
}

Intern::Intern(const Intern &src)
{
    std::cout << "copy constructor called"<< std::endl;
	if (this != &src)
		*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
    std::cout << "copy assignment operator called"<<std::endl;
	if (this != &src)
		*this = src;
	return (*this);
}

Intern::~Intern()
{
    std::cout << "destructor called"<<std::endl;
}

AForm *Intern::makeForm(std::string const name, std::string const target)
{
    int i;
	std::string names[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm* objects[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	i = 0;
	while (i < 3)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
            for (int j = 0;j < 3; j++) 
            {
                if (j != i && objects[i] != nullptr) 
                   delete objects[j];  
            }
			return (objects[i]);
		}
        else 
        {
            delete objects[i];
            objects[i] = nullptr;
        }
		++i;
	}
	std::cout << "Intern failed to created object : the name passed as parameter doesn’t exis" << name << std::endl;
	return (NULL);
}

