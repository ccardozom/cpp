/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 08:21:24 by ccardozo          #+#    #+#             */
/*   Updated: 2021/09/29 15:20:52 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(int i) : _index(i), _index_contacts(i){
	return ;
}

int	Phonebook::get_index() const {
	return (this->_index);
}

void Phonebook::set_index_increment(int i){
	this->_index = ++i;
	return ;
}

int Phonebook::get_index_contacts() const{
	return (this->_index_contacts);
}

void Phonebook::set_index_contacts(int i)
{
	this->_index_contacts = i;
	std::cout << "Cantidad de contactos LOCOS: " << _index_contacts << std::endl;

}