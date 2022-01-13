#include "ClapTrap.hpp"

//constructor por defecto
ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor is called" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = "Default";
}

//constructor con una variable
ClapTrap::ClapTrap(std::string name){
    if (name.empty())
        name = "default";
    std::cout << "ClapTrap constructor whith the name " << name << " is called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

//destructor
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap default destructor is called and " << getName() << " has been destroyed" << std::endl;
}

//constructor copia
ClapTrap::ClapTrap(ClapTrap const &clap){
    std::cout << "ClapTrap copy constructor is called" << std::endl;
    this->_name = clap._name;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    this->_attackDamage = clap._attackDamage;
}

//sobrecarga de operador 
ClapTrap &ClapTrap::operator=(ClapTrap const &clap){
    if (this != &clap)
    {
        this->_name = clap.getName();
        this->_hitPoints = clap.getHitPoints();
        this->_energyPoints = clap.getEnergyPoints();
        this->_attackDamage = clap.getAttackDamage();
    }
    return *this;
}

void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << getName() << " attack to " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if ((int)amount > 0)
    {
        std::cout << "ClapTrap " << getName() << " is attacked and loses " << amount << " of hit points! " << std::endl;
        std::cout << getName() << " had " << getHitPoints() << " of hit points! ";
         _hitPoints -= amount;
        if (getHitPoints() < 0)
            _hitPoints = 0;
        std::cout << "Now has " << _hitPoints << " of hit points!" << std::endl;
    }   
    else
        std::cout << "Error: is invalid number damage" << std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount){
    if ((int)amount > 0)
    {

        std::cout << getName() << " recovers " << amount << " of energy points!" << std::endl;
        std::cout << getName() << " had " << getEnergyPoints() << " of energy points.";
        _energyPoints += amount;
        std::cout << "Now has " << getEnergyPoints() << " of energy points" << std::endl;
    }   
    else
        std::cout << "Error: is invalid number to be repair" << std::endl;
}

std::string ClapTrap::getName() const{
    return _name;
}

int ClapTrap::getHitPoints() const{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints() const{
    return _energyPoints;
}

int ClapTrap::getAttackDamage() const{
    return _attackDamage;
}