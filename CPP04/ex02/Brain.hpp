/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:54:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 11:07:51 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        virtual ~Brain(void);
        virtual Brain &operator=(Brain const &s);
        Brain(Brain const &src);
        void set_first_index(std::string str);
        std::string get_first_index();
};


#endif

