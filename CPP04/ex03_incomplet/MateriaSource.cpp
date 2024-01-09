/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:34:30 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 03:19:00 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"



MateriaSource::MateriaSource()
{
    num = 0;
    std::cout<<"constructor for MateriaSource called"<<std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout<< "deconstructor for MateriaSource called"<<std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    std::cout<< "copy constructor for MateriaSource called"<<std::endl;
}


MateriaSource &MateriaSource::operator=(MateriaSource const &s)
{
    // if(this != &s)

    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if(num < 4)
    {
        learnedMaterias[num] = materia->clone();
        num++;
    }
    else
        std::cout<< "full"<<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

}





