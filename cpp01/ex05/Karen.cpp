/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:44:55 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/18 19:58:35 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void ){
    std::cout << "Debug" << std::endl;
    return ;
}

void Karen::info( void ){
    std::cout << "Info" << std::endl;
    return ;
}

void Karen::warning( void ){
    std::cout << "warning" << std::endl;
    return ;
}

void Karen::error( void ){
    std::cout << "error" << std::endl;
    return ;
}

void Karen::complain(std::string level){
    
    void    (Karen::*f[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string fstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (fstr[i].compare(level))
            (*f[i])();
    }
    return ;
}