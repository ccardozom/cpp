/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:25:25 by ccardozo          #+#    #+#             */
/*   Updated: 2021/12/20 12:02:36 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point() : _x(0), _y(0){
}

Point::Point(float const x, float const y) : _x(x), _y(y){
}

Point::Point(Point const &copy) : _x(copy.getX()), _y(copy.getY()){
    *this = copy;
}

Point::~Point(){
    
}

Point &Point::operator=(Point const &src){
    if (this == &src)
       return *this;
    return (*this);
}

float Point::getX() const{
    return _x.toFloat();
}

float Point::getY() const{
    return _y.toFloat();
}