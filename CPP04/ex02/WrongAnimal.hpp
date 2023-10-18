/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:25:02 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 17:57:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
    private:

    protected:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &s);
        WrongAnimal(WrongAnimal const &src);
        
        void makeSound() const;
        std::string getType() const;
};












#endif


