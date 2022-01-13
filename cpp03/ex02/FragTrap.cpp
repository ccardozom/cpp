#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap constructor with the name " << name << "is called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &frag){
    std::cout << "FragTrap copy constructor is called" << std::endl;
    this->_name = frag._name;
    this->_hitPoints = frag._hitPoints;
    this->_energyPoints = frag._energyPoints;
    this->_attackDamage = frag._attackDamage;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap default destructor is called and " << getName() << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &frag){
    if (this != &frag)
    {
        this->_name = frag.getName();
        this->_hitPoints = frag.getHitPoints();
        this->_energyPoints = frag.getEnergyPoints();
        this->_attackDamage = frag.getAttackDamage();
    }
    return *this;
}

void FragTrap::attack(std::string const &frag){
    std::cout << "FragTrap " << _name << " ataca a " << frag << ", causandole " << _attackDamage << " de daño!!" << std::endl;
}

void FragTrap::highFiveGuys() const{
    std::cout << "FragTrap " << _name << " high fives" << std::endl;
}
