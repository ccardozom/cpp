#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor is called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap constructor whith the name " << name << " is called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scav){
    std::cout << "ScavTrap copy constructor is called" << std::endl;
    this->_name = scav._name;
    this->_hitPoints = scav._hitPoints;
    this->_energyPoints = scav._energyPoints;
    this->_attackDamage = scav._attackDamage;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav){
    if (this != &scav)
    {
        this->_name = scav.getName();
        this->_hitPoints = scav.getHitPoints();
        this->_energyPoints = scav.getEnergyPoints();
        this->_attackDamage = scav.getAttackDamage();
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap default destructor is called and " << getName() << " has been destroyed" << std::endl;
}

void ScavTrap::attack(std::string const &scav){
    std::cout << "ScavTrap " << getName() << " attack to " << scav << ", causing " << getAttackDamage() << " points of damage!!" << std::endl;
}

void ScavTrap::guardGate() const{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}


