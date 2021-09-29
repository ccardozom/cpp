/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:42:11 by ccardozo          #+#    #+#             */
/*   Updated: 2021/09/29 16:05:04 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.h"

void	exit_program()
{
	std::cout << "Good Bye" << std::endl;
	exit(0);
}

void	add_contact(Phonebook *phonebook)
{
	int	i;
	std::string data;
	
	i = phonebook->get_index();
	if (i < 8)
	{
		std::cout << "===== Create a Contact ====="<< std::endl;
		std::cout << "Name: ";
		std::cin >> data;
		phonebook->contact[i].set_data(1, data);
		std::cout << "Last Name: ";
		std::cin >> data;
		phonebook->contact[i].set_data(2, data);
		std::cout << "Nickname: ";
		std::cin >> data;
		phonebook->contact[i].set_data(3, data);
		std::cout << "Phone: ";
		std::cin >> data;
		phonebook->contact[i].set_data(4, data);
		std::cout << "Darkest Secret: ";
		std::cin >> data;
		phonebook->contact[i].set_data(5, data);
		//phonebook->contact[i].get_data();
		if (phonebook->get_index_contacts() != 8)
			phonebook->set_index_contacts(i + 1);
		phonebook->set_index_increment(i);
	}
	else
	{
		std::cout << "Cantidad de contactos: " << phonebook->get_index_contacts() << std::endl;
		phonebook->set_index_increment(-1);
	}
}

void	search_contact(Phonebook *phonebook)
{
	int	i;

	i = 0;
	while (i < phonebook->get_index_contacts())
	{
		std::cout << "|" << std::setw(10);
		std::cout << i + 1;
		std::cout << "|" << std::setw(10);
		phonebook->contact[i].get_str(1);
		std::cout << "|" << std::setw(10);
		phonebook->contact[i].get_str(2);
		std::cout << "|" << std::setw(10);
		phonebook->contact[i].get_str(3);
		std::cout << "|" << std::endl;
		i++;
	}
}

int main(int argc, char **argv)
{
	std::string	comand;
	Phonebook ph(0);

	while (1)
	{
		std::cout << "Input a command (ADD, SEARCH, EXIT): " << std::endl;
		std::cin >> comand;
		if (!comand.compare("EXIT"))
			exit_program();
		else if (!comand.compare("ADD"))
			add_contact(&ph);
		else if (!comand.compare("SEARCH"))
			search_contact(&ph);
	}
	return (0);
}