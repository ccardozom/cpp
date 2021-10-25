/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:24:58 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/19 12:34:21 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void randonChump(std::string name);

int	main(void)
{
	Zombie *ptr;

	Zombie z1("zombie1");
	ptr = newZombie("zombie2");
	if (!ptr)
		return (-1);
	randonChump("zombie3");

	delete ptr;
	return (0);
}