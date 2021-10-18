/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:06:00 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/15 16:12:33 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>



class Weapon{
    public:
        Weapon(std::string type); //constructor
        const std::string &getType() const; // funcion por referencia
        void    setType(std::string type); // funcion set para modificar atributo
                                            // privado _type

    private:
        std::string _type;
};

#endif