/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:54:48 by ccardozo          #+#    #+#             */
/*   Updated: 2021/12/20 08:40:32 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _num = 0;
}

Fixed::Fixed(const Fixed &a){
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &a){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &a)
        this->_num = a.getRawBits();
    return *this;
}

Fixed::Fixed(int const num_int){
    std::cout << "Int constructor called" << std::endl;
    this->_num = num_int << Fixed::_bits;
}

Fixed::Fixed(float const num_float){
    std::cout << "Float constructor called" << std::endl;
    this->_num = (int)(roundf(num_float * (1 << Fixed::_bits) ));
}
 

float Fixed::toFloat() const{
    return (float)this->_num / (float)(1 << Fixed::_bits);
}

int Fixed::toInt() const{
    return this->_num >> Fixed::_bits;
}

int Fixed::getRawBits() const{
    return (_num);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}