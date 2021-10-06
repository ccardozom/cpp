/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:24:58 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/06 15:40:05 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randonChump(std::string name);

int	main(void)
{
	Zombie *ptr;
	
	Zombie z1("zombie1");
	Zombie z2("zombie2");

	ptr = newZombie("zombie3");

	randonChump("zombie4");
	
	delete ptr;
	return (0);
}