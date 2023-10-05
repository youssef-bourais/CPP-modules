/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:48:30 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/02 19:00:31 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>


int cheak_error(char **tab)
{
    int i = 0;
    while (i < 4) 
    {
        if(tab[i][0] == '\0')
            return 0;
        i++;
    }
    return 1;
}

std::string core(std::string old, std::string new, std::string line)
{

}





int main(int argc, char *argv[])
{

    if(argc != 4)
    {
        std::cout<<"ERROR"<<std::endl;
        return 1;
    }
    else
    {
        if(!cheak_error(argv))
        {
            std::cout<<"ERROR"<<std::endl;
            return 1;
        }
        else
        {
            std::string filename;
            filename = argv[1];
            std::ifstream  file;
            file.open(filename);
            if (!file.is_open())
            {
	            std::cout << "File not found!"<<std::endl;
                return 1;
            }
            std::string line;
            while (std::getline(file, line))
            {
                line = core(argv[2], argvr[3], line);
            }   
        }    
    }
    return 0;

}
