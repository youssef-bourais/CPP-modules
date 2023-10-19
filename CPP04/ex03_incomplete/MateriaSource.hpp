/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:34:39 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/19 17:24:51 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        int num;
        AMateria* learnedMaterias[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &s);
        MateriaSource(MateriaSource const &s);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};




#endif


