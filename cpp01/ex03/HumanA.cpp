/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:40 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/14 15:32:38 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon clup) : _name(name), _arma(clup){
    return ;
}

void HumanA::attack(){
    std::cout << this->_name << "attacks with his" << _arma << std::endl;
    return ;
}