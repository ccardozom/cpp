#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap " << _name << " constructor " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
    std::cout << "El constructor de DiamondTrap " << _name << " iniciado. " << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &frag){
    std::cout << "DiamondTrap - El constructor copia de " << _name << "ya esta aquí" << std::endl;
    *this = frag;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "Destructor de DiamondTrap " << _name << " es lo primero que se llama" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs){
    if (this != &rhs)
    {
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _energyPoints = rhs._energyPoints;
    }
    return *this;
}

void DiamondTrap::attack(std::string const &diam){
    ScavTrap::attack(diam);
}

void DiamondTrap::whoAmI() const{
    std::cout << "Yo soy DiamondTrap " << _name << " y ClapTrap" << ClapTrap::_name << std::endl;
}
