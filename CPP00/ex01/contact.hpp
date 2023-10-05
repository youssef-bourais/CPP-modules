/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:18:08 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/25 15:14:39 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

class contact
{
    private:

        std::string phone_number;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;

    public:

        std::string get_phone();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_darkest_secret();
        
        void set_phone(std::string phone_number);
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nick_name(std::string nickname);
        void set_darkest_secret(std::string secret);
};


int is_number(std::string str);
int is_digit(char c);
std::string truncat(std::string text);


#endif

