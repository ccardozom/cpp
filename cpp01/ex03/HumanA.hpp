/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:09:49 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/15 10:46:07 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA{
    public:
        HumanA(std::string name, Weapon &weapon);
        void    attack() const;
        
    private:
        std::string _name;
        Weapon &_arma;
};

#endif