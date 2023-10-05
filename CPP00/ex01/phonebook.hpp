/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:19:03 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/25 17:29:32 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class phonebook
{
    private:

        contact list[8];

    public:
        
        void add_contact(int i);
        void search_contact(int i);
        void display_contact(int i);
        void insert_contact(int i);
};

#endif


