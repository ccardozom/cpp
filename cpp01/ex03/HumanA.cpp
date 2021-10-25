/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:40 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/18 11:23:32 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _arma(weapon){
    return ;
}

void HumanA::attack() const{
    std::cout << this->_name << " attacks with his " << this->_arma.getType() << std::endl;
    return ;
}