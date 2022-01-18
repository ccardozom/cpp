#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "Animal constructor has been called" << std::endl;
}

Animal::Animal(Animal const &src){
    std::cout << "Animal copy constructor has been called" << std::endl;
    this->_type = src.getType();
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
    std::string type = this->getType();
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    if (type == "Dog")
        std::cout << "Woff Woff Woff" << std::endl;
    else if (type == "Cat")
        std::cout << "Miauuu Miauuu" << std::endl;
    else
        std::cout << "-----" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

