#include "Character.hpp"

Character::Character(){
    std::cout << "Character default constructor is called" << std::endl;
}

Character::Character(Character const &c){
    std::cout << "Character copy constructor is called" << std::endl;
    this->_name = c.getName();
    for (int i = 0; i < 4; i++)
		this->_inventory[i] = c._inventory[i]->clone();
}

Character::~Character(){
    std::cout << "Character destructor is called" << std::endl;
    for (int i=0; i<4; i++)
    {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
}

Character &Character::operator=(Character const &rhs){
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        for (int i=0; i<4; i++)
        {
            if (this->_inventory[i] != NULL)
                delete this->_inventory[i];
        }
        for (int i=0; i<4; i++)
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
    return *this;
}

Character::Character(std::string name){
    std::cout << "Character constructor called whith name " << name << std::endl;
    this->_name = name;
    for (int i=0; i<4; i++)
        this->_inventory[i] = NULL;
}

void Character::equip(AMateria *m){
    for (int i=0; i<4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
    {
        delete _inventory[idx];
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target){
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const{
    return this->_name;
}