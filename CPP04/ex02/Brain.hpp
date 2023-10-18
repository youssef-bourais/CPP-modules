/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:54:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 17:04:02 by ybourais         ###   ########.fr       */
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

        void set(std::string str, int i);
        std::string get(int i);
};


#endif

