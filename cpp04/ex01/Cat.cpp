#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor has been called" << std::endl;
    this->Animal::_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const &c){
    std::cout << "Cat copy constructor has been called" << std::endl;
    this->_type = c._type;
    this->_brain = new Brain();
    *this->_brain = *c._brain;
}

Cat::~Cat(){
    std::cout << "Cat destructor has been called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &cat){
    if (this != &cat)
    {
        this->_type = cat._type;
        if (this->_brain)
        {
            delete this->_brain;
            this->_brain = new Brain;
            *this->_brain = *cat._brain;
        }
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Miauuu Miauuu" << std::endl;
}
