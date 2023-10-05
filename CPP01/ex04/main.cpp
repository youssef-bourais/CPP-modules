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

#include "tool.hpp"

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
            std::ofstream file2;
            filename = filename + ".replace";
            file2.open(filename);
            if (!file2.is_open()) 
            {
                std::cout<<"error in opening the file"<<std::endl;
                return 1;
            }
            std::string line;
            while (std::getline(file, line))
            {
                line = core(argv[2], argv[3], line);
                file2<<line<<std::endl;
            }
            file.close();
            file2.close();
        }    
    }
    return 0;

}
