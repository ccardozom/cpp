/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:31:37 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/19 13:07:18 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void ){
    std::cout << "Me gustaria algo de beacon extra para mi hamburguesa" << std::endl;
}

void Karen::info( void ){
    std::cout << "No me puedo creer que añadir bacon extra cueste más dinero. No ponéis suficiente. Si lo hicierais no tendría que pedirlo.." << std::endl;
}

void Karen::warning( void ){
    std::cout << "Creo que me merezco algon más de bacon gratis. LLevo viniendo años y tu empezaste a trabajar aquí el mes pasado" << std::endl;
}

void Karen::error( void ){
    std::cout << "Esto es inaceptable. Quiero hablar con el responsable ahora mismo.." << std::endl;
}

void Karen::complain(std::string level){
    std::string fstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    
    for(i = 0; i < 4; i++)
    {
        if (!fstr[i].compare(level))
            break;
	}
	switch (i) {
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
	}
}