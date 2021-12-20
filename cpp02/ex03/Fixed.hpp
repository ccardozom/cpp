/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:39:46 by ccardozo          #+#    #+#             */
/*   Updated: 2021/11/08 13:52:00 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        Fixed();
        Fixed(int const);
        Fixed(float const);
        Fixed(const Fixed &);
        ~Fixed();
        
        Fixed &operator=(Fixed const &);
        
        int getRawBits() const;
        void	setRawBits(int const);
        float toFloat() const;
        int toInt() const;
        
        bool operator>=(Fixed const &) const;
        bool operator<=(Fixed const &) const;
        bool operator==(Fixed const &) const;
        bool operator!=(Fixed const &) const;
        bool operator>(Fixed const &) const;
        bool operator<(Fixed const &) const;
        
        Fixed operator+(Fixed const &) const;
        Fixed operator-(Fixed const &) const;
        Fixed operator*(Fixed const &) const;
        Fixed operator/(Fixed const &) const;
        
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);
       
        static const Fixed &min(Fixed const &, Fixed const &);        
        static const Fixed &max( Fixed const &lhs, Fixed const &rhs );
 
    private:
        int _num;
        static const int _bits;

};

std::ostream	&operator<<( std::ostream &, Fixed const & );

#endif