#ifndef SOBRECARGA_HPP
#define SOBRECARGA_HPP

#include <iostream>

class operadores{

public:
    operadores();
    operadores(int);
    operadores(operadores const &);
    ~operadores();
    int getValue_a() const;
    int getValue_b() const;

    operadores operator+(operadores const &) const;
    operadores &operator=(operadores const &);
    operadores operator++();

private:
    int _a;
    int _b;
};
#endif