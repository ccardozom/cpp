#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "Animal constructor has been called" << std::endl;
}

Animal::Animal(Animal const &src){
    std::cout << "Animal copy constructor has been called" << std::endl;
    *this = src;
}

Animal::~Animal(){
    std::cout << "Animal destructor has been called" << std::endl;
}

Animal &Animal::operator=(Animal const &ani){
    if (this != &ani)
    {
        _type = ani._type;
    }
    return *this;
}

void Animal::makeSound() const{
    std::cout << "'(-_-)'" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

