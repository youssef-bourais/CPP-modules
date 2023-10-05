/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:11:07 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/25 15:10:48 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string contact::get_phone()
{
    return this->phone_number;
}

std::string contact::get_first_name()
{
    return this->first_name;
}

std::string contact::get_last_name()
{
    return this->last_name;
}

std::string contact::get_nickname()
{
    return this->nickname;
}

std::string contact::get_darkest_secret()
{
    return this->darkest_secret;
}




void contact::set_phone(std::string phone_number)
{
    this->phone_number = phone_number;
}

void contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void contact::set_nick_name(std::string nickname)
{
    this->nickname = nickname;
}

void contact::set_darkest_secret(std::string secret)
{
    this->darkest_secret = secret;
}
