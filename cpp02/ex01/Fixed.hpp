#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int _num;
        static const int _bits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &);
        Fixed(int const);
        Fixed(float const);
        float toFloat() const;
        int toInt() const;
        int getRawBits() const;
        Fixed &operator=(Fixed const &);
};

std::ostream	&operator<<( std::ostream &, Fixed const &rhs );

#endif