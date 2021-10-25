/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:54:48 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/22 14:16:13 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _num = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &fix){
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed &Fixed::operator=(Fixed const &fix){
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fix)
        return *this;
    _num = fix.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_num);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    _num = raw;
}