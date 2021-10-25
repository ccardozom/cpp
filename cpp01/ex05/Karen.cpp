/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:44:55 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/19 09:15:08 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void ){
    std::cout << "Me gustaria algo de beacon extra para mi hamburguesa" << std::endl;
    return ;
}

void Karen::info( void ){
    std::cout << "No me puedo creer que añadir bacon extra cueste más dinero. No ponéis suficiente. Si lo hicierais no tendría que pedirlo.." << std::endl;
    return ;
}

void Karen::warning( void ){
    std::cout << "Creo que me merezco algon más de bacon gratis. LLevo viniendo años y tu empezaste a trabajar aquí el mes pasado" << std::endl;
    return ;
}

void Karen::error( void ){
    std::cout << "Esto es inaceptable. Quiero hablar con el responsable ahora mismo.." << std::endl;
    return ;
}

void Karen::complain(std::string level){
    void    (Karen::*f[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string fstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (!fstr[i].compare(level))
            (this->*f[i])();
    }
    return ;
}