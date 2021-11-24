#include <iostream>
#include "sobrecarga.hpp"

operadores::operadores(){
    this->_a = 10;
    this->_b = 10;
}

operadores::operadores(int x) : _a(x), _b(x){
}

operadores::operadores(operadores const &a){
    this->_a = a._a * 5;
    this->_b = a._b * 5;
}

operadores::~operadores(){
    std::cout << "a: " << this->_a << " b: " << this->_b << std::endl;
}

operadores &operadores::operator=(operadores const &b){
    std::cout << "a: " << this->_a << " b: " << this->_b << std::endl;
    this->_a = b._a;
    this->_b = b._b;
    return *this;
}

operadores operadores::operator+(operadores const &b) const{
    operadores result(0);
    std::cout << this->_a << std::endl;
    result._a = this->_a + b._a;
    result._b = this->_b + b._b;
    return result;
}

int operadores::getValue_a() const{
    return this->_a; 
}

int operadores::getValue_b() const{
    return this->_b; 
}

int main()
{
    operadores a, b, resultado(0);
    
    resultado = a + b;
    operadores c(resultado);
    std::cout << "resultado._a: " << resultado.getValue_a() << " resultado._b: " << resultado.getValue_b() << std::endl;
    std::cout << "c._a: " << c.getValue_a() << " c._b: " << c.getValue_b() << std::endl;

    return 0;
}