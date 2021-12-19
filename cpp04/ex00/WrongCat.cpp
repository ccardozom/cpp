#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor has been called" << std::endl;
    WrongAnimal::_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src){
    std::cout << "WrongCat copy constructor has been called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &WrongCat){
    if (this != &WrongCat)
    {
        _type = WrongCat._type;
    }
    return *this;
}