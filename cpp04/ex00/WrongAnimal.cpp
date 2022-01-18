#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor has been called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    std::cout << "WrongAnimal copy constructor has been called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor has been called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal){
    if (this != &WrongAnimal)
    {
        _type = WrongAnimal._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "Is a wrong animal ";
    std::cout << "'(-_-)'" << std::endl;
}

std::string WrongAnimal::getType() const{
    return _type;
}