#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor has been called" << std::endl;
    Animal::_type = "Dog";
}

Dog::Dog(Dog const &src){
    std::cout << "Dog copy constructor has been called" << std::endl;
    this->_type = src.getType();
}

Dog::~Dog(){
    std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog){
    if (this != &dog)
    {
        _type = dog._type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Woff Woff Woff" << std::endl;
}
