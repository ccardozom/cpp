#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor has been called" << std::endl;
    Animal::_type = "Dog";
}

Dog::Dog(Dog const &dog){
    std::cout << "Dog copy constructor has been called" << std::endl;
    *this = dog;
    _brain = new Brain();
    Animal::_type = dog._type;
}

Dog::~Dog(){
    std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog){
    if (this != &dog)
    {
        Animal::_type = dog._type;
        _brain = new Brain();
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woff Woff Woff" << std::endl;
}
