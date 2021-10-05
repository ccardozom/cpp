/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:20:48 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/05 09:36:59 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string	Contact::get_data(int id) const {
	if (id == 1)
		return(_name);
	else if (id == 2)
		return(_last_name);
	else if (id == 3)
		return(_nickname);
	else if (id == 4)
		return(_phone);
	else if (id == 5)
		return(_darkest_secret);
	return(NULL);
}


void	Contact::get_str(int id) const {
	if (id == 1)
	{
		if (this->_name.size() > 10)
			std::cout << this->_name.substr(0, 9) + '.';
		else
			std::cout << this->_name;
	}
	if (id == 2)
	{
		if (this->_last_name.size() > 10)
			std::cout << this->_last_name.substr(0, 9) + '.';
		else
			std::cout << this->_last_name;
	}
	if (id == 3)
	{
		if (this->_nickname.size() > 10)
			std::cout << this->_nickname.substr(0, 9) + '.';
		else
			std::cout << this->_nickname;
	}
}

void	Contact::set_data(int id, std::string data){
	if (id == 1)
		_name = data;
	else if (id == 2)
		_last_name = data;
	else if (id == 3)
		_nickname = data;
	else if (id == 4)
		_phone = data;
	else if (id == 5)
		_darkest_secret = data;
}