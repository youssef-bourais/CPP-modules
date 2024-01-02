/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:59:07 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/02 07:08:13 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

class ElementNotFound : public std::exception 
{
public:
    virtual const char* what() const throw() 
    {
        return "Element not found in container.";
    }
};

template <typename T>
typename T::const_iterator easyfind(const T &container, int n)
{
    typename T::const_iterator it = std::find(std::begin(container), std::end(container), n);
    if(it == container.end())
        throw ElementNotFound();
    return it;
}



#endif
