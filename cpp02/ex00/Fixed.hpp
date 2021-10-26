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
        Fixed(Fixed &);
        Fixed &operator= (Fixed const &);
        int getRawBits() const;
        void setRawBits (int const);
};

#endif