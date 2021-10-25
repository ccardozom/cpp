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
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
};

#endif