/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:54:48 by ccardozo          #+#    #+#             */
/*   Updated: 2021/11/05 08:46:47 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


const int Fixed::_bits = 8;

Fixed::Fixed() : _num(0){
}

Fixed::Fixed(int const num_int) : _num(num_int << Fixed::_bits){
}

Fixed::Fixed(float const num_float) : _num((int)(roundf(num_float * (1 << Fixed::_bits) ))){
}

Fixed::Fixed(const Fixed &a){
    *this = a;
}

Fixed::~Fixed(){
}
 
Fixed &Fixed::operator=(Fixed const &a){
    if (this != &a)
        this->_num = a.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    return (_num);
}

void Fixed::setRawBits(int const new_num){
	_num = new_num;
}

float Fixed::toFloat() const{
    return (float)_num / (float)(1 << Fixed::_bits);
}

int Fixed::toInt() const{
    return _num >> Fixed::_bits;
}

bool Fixed::operator>(Fixed const &b) const{
    return (this->_num > b.getRawBits());
}

bool Fixed::operator<(Fixed const &b) const
{
    return (this->_num < b.getRawBits());
}

bool Fixed::operator>=(Fixed const &b) const{
    return (this->_num >= b.getRawBits());
}

bool Fixed::operator<=(Fixed const &b) const{
    return (this->_num <= b.getRawBits());
}

bool Fixed::operator==(Fixed const &b) const{
    return (this->_num == b.getRawBits());
}

bool Fixed::operator!=(Fixed const &b) const{
    return (this->_num != b.getRawBits());
}

Fixed	Fixed::operator+( Fixed const &rhs ) const {

	Fixed result( this->toFloat() + rhs.toFloat() );

	return result;
}

Fixed	Fixed::operator-( Fixed const &rhs ) const {

	Fixed	result( this->toFloat() - rhs.toFloat() );

	return result;
}

Fixed	Fixed::operator*( Fixed const &a ) const {
	Fixed	result( this->toFloat() * a.toFloat() );
	return result;
}

Fixed	Fixed::operator/( Fixed const &a ) const {

	Fixed	result( this->toFloat() / a.toFloat() );

	return result;
}

Fixed	&Fixed::operator++( void ) {
	this->_num++;
	return *this;
}

Fixed	&Fixed::operator--( void ) {

	this->_num--;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	old(*this);
	this->operator++();
	return old;
}

Fixed	Fixed::operator--( int ) {
	Fixed	old(*this);
	this->operator--();
	return old;
}

const Fixed &Fixed::max( Fixed const &a, Fixed const &b ){
	return a < b ? a : b;
}

const Fixed &Fixed::min( Fixed const &a, Fixed const &b ){
	return a > b ? a : b;
}

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {
	o << rhs.toFloat();
	return o;
}