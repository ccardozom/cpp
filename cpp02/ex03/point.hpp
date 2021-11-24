/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:25:31 by ccardozo          #+#    #+#             */
/*   Updated: 2021/11/12 09:39:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

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
        float _x;
        float _y;
};

#endif