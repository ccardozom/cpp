#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "Default constructor is called" << std::endl;
    type = "materia";
}

AMateria::AMateria(AMateria const &copy){
    std::cout << "Copy constructor is called" << std::endl;
    std::cout << "this->type antes: " << this->type << std::endl;
    *this = copy;
    std::cout << "this->type despues: " << this->type << std::endl;

}

AMateria::AMateria(std::string const &type){
    std::cout << "AMateria type constructor is called" << std::endl;
    this->type = type;
}

AMateria &AMateria::operator=(AMateria const &rhs){
    std::cout << "AMateria operator= is called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.getType();
    }
    return *this;
}

std::string const &AMateria::getType() const{
    return type;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor is called" << std::endl;
}

void AMateria::use(ICharacter &target){
    std::cout << "* uses " << this->type << " at " << target.getName() << " *" << std::endl;
}