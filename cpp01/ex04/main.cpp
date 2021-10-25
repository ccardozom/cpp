/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:11:19 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/19 13:02:14 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

int main(int argc, char **argv)
{
    std::string filename;
    std::ifstream input_file;
    std::ofstream ouput_file;
    std::string words;
    std::string word;
    std::string S1;
    std::string S2;
    std::istringstream cadena;

    if (argc != 4)
    {
        std::cout << "Error: number argument" << std::endl;
        return (-1);
    }
    else
    {
        filename = argv[1];
        S1 = argv[2];
        S2 = argv[3];
        input_file.open(filename);
        if (!input_file.is_open())
        {
            std::cout << "Error: file corrupted" << std::endl;
            return (-1);
        }
        ouput_file.open(filename.append(".replace"), std::ofstream::out);
        while (getline(input_file, words))
        {
            cadena.str(words);
            while (!cadena.eof())
            {   
                cadena >> word;
                if (!word.compare(S1))
                    word = S2;
                ouput_file << word;
                if (!cadena.eof())
                    ouput_file << " ";
            }
            cadena.clear();
            ouput_file << "\n";
        }
        ouput_file.close(); 
        input_file.close();
    }
    return (0);
}