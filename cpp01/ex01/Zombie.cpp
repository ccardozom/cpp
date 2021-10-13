/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:14:03 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/13 13:11:01 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str){
	this->announce();
}

Zombie::Zombie(){
	return ;
}

Zombie::~Zombie(){
	std::cout << this->_name << " ";
	std::cout << "is destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void){
	std::cout << this->_name << " ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}

std::string Zombie::getName() const{
	return (this->_name);
}

