#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor has been called" << std::endl;
    this->Animal::_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &d){
    std::cout << "Dog copy constructor has been called" << std::endl;
    this->_type = d._type;
    this->_brain = new Brain();
    *this->_brain = *d._brain;
}

Dog::~Dog(){
    std::cout << "Dog destructor has been called" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(Dog const &dog){
    if (this != &dog)
    {
        this->_type = dog._type;
        if (this->_brain)
        {
            delete this->_brain;
            this->_brain = new Brain;
            *this->_brain = *dog._brain;
        }
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Woff Woff Woff" << std::endl;
}
