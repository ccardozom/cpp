/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:42:11 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/05 11:08:37 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.h"

void	exit_program()
{
	exit(0);
}


void	print_info(Phonebook *phonebook, int index)
{
	std::cout << "Name: " << phonebook->contact[index - 1].get_data(1);
	std::cout << std::endl;
	std::cout << "Last Name: " << phonebook->contact[index - 1].get_data(2);
	std::cout << std::endl;
	std::cout << "Nickname: " << phonebook->contact[index - 1].get_data(3);
	std::cout << std::endl;
	std::cout << "Phone: " << phonebook->contact[index - 1].get_data(4);
	std::cout << std::endl;
	std::cout << "Darkest Secret: " << phonebook->contact[index - 1].get_data(5);
	std::cout << std::endl;
}
void	search_contact(Phonebook *phonebook)
{
	int		i, index = 0;
	char	input[1];

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
	
	std::cout << "Enter the contact index: " << std::endl;
	std::cin >> input;
	index = atoi(input);
	if (index && index > 0 && index <= phonebook->get_index_contacts())

		print_info(phonebook, index);
	else
		std::cout << "Wrong index" << std::endl;
}

void	add_contact(Phonebook *phonebook)
{
	int	i;
	std::string data;
	
	i = phonebook->get_index();
	if (i < MAX_CONTACT)
	{
		std::cin.ignore();
		std::cout << "===== Create a Contact ====="<< std::endl;
		std::cout << "Name: ";
		std::getline(std::cin, data);
		phonebook->contact[i].set_data(1, data);
		std::cout << "Last Name: ";
		std::getline(std::cin, data);
		phonebook->contact[i].set_data(2, data);
		std::cout << "Nickname: ";
		std::getline(std::cin, data);
		phonebook->contact[i].set_data(3, data);
		std::cout << "Phone: ";
		std::getline(std::cin, data);
		phonebook->contact[i].set_data(4, data);
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, data);
		phonebook->contact[i].set_data(5, data);
		if (phonebook->get_index_contacts() != MAX_CONTACT)
			phonebook->set_index_contacts(i + 1);
		phonebook->set_index_increment(i);
	}
	else
	{
		phonebook->set_index_increment(-1);
	}
}

int main(void)
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