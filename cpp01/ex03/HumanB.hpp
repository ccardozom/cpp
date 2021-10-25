/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:16:48 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/18 11:49:20 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack() const;
        
    private:
        std::string _name;
        Weapon *_arma;
};

#endif