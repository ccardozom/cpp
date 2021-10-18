/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:31:46 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/15 10:29:45 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
    return ;
}

const std::string &Weapon::getType() const{
    return (this->_type);
}

void    Weapon::setType(std::string type){
    this->_type = type;
    return ;
}