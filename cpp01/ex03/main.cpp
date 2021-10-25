/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:02:44 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/15 16:02:30 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main() 
{
        Weapon club = Weapon("crude spiked club");
     
        HumanA bob("Bob", club);
        bob.attack();
       /* club.setType("some other type of club");
        bob.attack();

        Weapon        club = Weapon("crude spiked club");
     
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack(); */

    return (0);
}