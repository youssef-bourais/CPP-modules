/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:59:07 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/03 01:10:20 by ybourais         ###   ########.fr       */
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
    typename T::const_iterator it = std::find(container.begin(), container.end(), n); 
    if(it == container.end())
        throw ElementNotFound();
    return it;
}



#endif
