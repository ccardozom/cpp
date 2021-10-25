#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
    return;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->_arma = &weapon;
}

void HumanB::attack() const{
    if (this->_arma == NULL)
    {
        std::cout << "Error to take a weapon" << std::endl;
        return;
    }
    else
        std::cout << this->_name << " attacks with his " << _arma->getType() << std::endl;
    return ;
}