/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:02:44 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/14 15:31:43 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int main() 
{
        Weapon club = Weapon("crude spiked club");
     
       HumanA bob("Bob", club);
       /*   bob.attack();
        club.setType("some other type of club");
        bob.attack();

        Weapon        club = Weapon("crude spiked club");
     
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack(); */

    return (0);
}