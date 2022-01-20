#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << "Ice default constructor is called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy){
    std::cout << "Copy constructor is called" << std::endl;
    *this = copy;
}

Ice::~Ice(){
    std::cout << "Ice destructor is called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs){
    std::cout << "Ice operator= is called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.getType();
    }
    return *this;
}

AMateria *Ice::clone() const{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}