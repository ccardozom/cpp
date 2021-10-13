/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:24:58 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/13 13:32:06 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
void randonChump(std::string name);

int	main(void)
{
	Zombie *ptr;

	ptr = zombieHorde(0, "hola");
	if (!ptr)
		return (-1);
	delete [] ptr;
	return (0);
}