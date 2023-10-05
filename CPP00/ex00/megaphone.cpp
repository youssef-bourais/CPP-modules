/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:34:46 by ybourais          #+#    #+#             */
/*   Updated: 2023/09/25 17:27:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_in_upercase(char **tab)
{
    int i;
    int j;

    i = 1;
    while(tab[i])
    {
        j = 0;
        while(tab[i][j])
        {
            if(tab[i][j] >= 97 && tab[i][j] <= 122)
                std::cout << (char )toupper(tab[i][j]);
            else
                std::cout << tab[i][j];
            j++;
        }
        i++;
    }
}



int main(int argc, char **tab)
{
    if(argc != 1)
        print_in_upercase(tab);
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}

