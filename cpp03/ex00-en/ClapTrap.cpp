#include "ClapTrap.hpp"

//constructor por defecto
ClapTrap::ClapTrap(){
    std::cout << "La personalidad comienza con el constructor por defecto" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = "Default";
}

//constructor con una variable
ClapTrap::ClapTrap(std::string name){
    std::cout << "La personalidad comienza aquí en el constructor" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = name;
}

//destructor
ClapTrap::~ClapTrap(){
    std::cout << "No pierdas el tiempo, ClapTrap " << getName() << " ha sido destruido" << std::endl;
}

//constructor copia
ClapTrap::ClapTrap(ClapTrap const &clap){
    std::cout << "Constructor copia del ClapTrap" << std::endl;
    *this = clap;
}

//sobrecarga de operador 
ClapTrap &ClapTrap::operator=(ClapTrap const &clap){
    if (this != &clap)
    {
        this->_name = clap.getName();
        this->_hitPoints = clap.getHitPoints();
        this->_energyPoints = clap.getEnergyPoints();
    }
    return *this;
}

void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << getName() << " ataca a " << target << " causandalo " << _attackDamage << " de daño!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << getName() << " es atacado y pierde " << amount << " de fuerza! " << std::endl;
    std::cout << getName() << " tenia " << getHitPoints() << " de fuerza! ";
    _hitPoints -= amount;
    if (getHitPoints() < 0)
        _hitPoints = 0;
    std::cout << "Ahora tiene " << _hitPoints << " de fuerza!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << getName() << " recupera " << amount << " puntos de energia!" << std::endl;
    std::cout << getName() << " tenia " << getEnergyPoints() << " de energia.";
    _energyPoints += amount;
    std::cout << " Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
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
