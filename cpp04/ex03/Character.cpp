#include "Character.hpp"

Character::Character(){

}

Character::Character(Character const &copy){
    
}

Character::~Character(){
    std::cout << "Character destructor is called" << std::endl;
    for (int i=0; i<4; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
}

Character &Character::operator=(Character const &rhs){
    
}