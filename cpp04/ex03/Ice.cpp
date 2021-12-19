#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice default constructor is called" << std::endl;
    type = "Ice default";
}

Ice::Ice(Ice const &copy){
    std::cout << "Copy constructor is called" << std::endl;
    *this = copy;
}

Ice::Ice(std::string const &type){
    std::cout << "Ice constructor is called" << std::endl;
    this->type = type;
}

Ice::~Ice(){
    std::cout << "Ice destructor is called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs){
    std::cout << "Ice operator= is called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

AMateria *Ice::clone() const{
    AMateria *tmp = new Ice(*this);
    return tmp;
}