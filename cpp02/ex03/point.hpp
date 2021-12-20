/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:25:31 by ccardozo          #+#    #+#             */
/*   Updated: 2021/12/20 09:56:00 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point{
    public:
        Point();
        Point(float const, float const);
        Point(Point const &);
        ~Point();

        Point &operator=(Point const &);

        float getX() const;
        float getY() const;

    private:
        Fixed const _x;
        Fixed const _y;
};

#endif