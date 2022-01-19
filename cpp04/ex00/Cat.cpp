#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor has been called" << std::endl;
    Animal::_type = "Cat";
}

Cat::Cat(Cat const &src){
    std::cout << "Cat copy constructor has been called" << std::endl;
    this->_type = src.getType();
}

Cat::~Cat(){
    std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(Cat const &Cat){
    if (this != &Cat)
    {
        _type = Cat._type;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Miauuu Miauuu" << std::endl;
}
