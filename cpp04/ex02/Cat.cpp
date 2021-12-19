#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor has been called" << std::endl;
    Animal::_type = "Cat";
}

Cat::Cat(Cat const &cat){
    std::cout << "Cat copy constructor has been called" << std::endl;
    *this = cat;
    _brain = new Brain();
    Animal::_type = cat._type;
}

Cat::~Cat(){
    std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(Cat const &Cat){
    if (this != &Cat)
    {
        Animal::_type = Cat._type;
        _brain = new Brain();
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Miauuu Miauuu" << std::endl;
}
