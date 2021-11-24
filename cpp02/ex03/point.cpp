/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:25:25 by ccardozo          #+#    #+#             */
/*   Updated: 2021/11/12 12:22:26 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"
#include <iostream>
#include <stdio.h>

Point::Point() : _x(0), _y(0){
}

Point::Point(float const x, float const y){
    this->_x = x;
    this->_y = y;
}

Point::Point(Point const &copy){
    *this = copy;
}

Point::~Point(){
    
}

Point &Point::operator=(Point const &robj){
    if (this != &robj)
    {
        this->_x = robj.getX();
        this->_y = robj.getY();
    }
    return (*this);
}

float Point::getX() const{
    return _x;
}

float Point::getY() const{
    return _y;
}