/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:31:46 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/14 15:15:46 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string ataque) : _type(ataque){
    return ;
}

const std::string &Weapon::getType() const{
    return (this->_type);
}

void    Weapon::setType(std::string type){
    this->_type = type;
}