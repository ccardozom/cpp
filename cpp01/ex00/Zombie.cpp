/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:14:03 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/13 11:23:26 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str){
	this->announce();
}
Zombie::~Zombie(){
	if (this->_name.size())
		std::cout << this->_name << " ";
	std::cout << "is destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void){
	if (this->_name.size())
		std::cout << this->_name << " ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}