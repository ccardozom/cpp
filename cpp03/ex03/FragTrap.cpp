#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap " << _name << " constructor " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "El constructor de FragTrap comienza su labor!!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &frag){
    std::cout << "FragTrap - El constructor copia de " << _name << "ya esta aquí" << std::endl;
    *this = frag;
}

FragTrap::~FragTrap(){
    std::cout << "Destructor de FragTrap " << _name << " es lo primero que se llama" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs){
    if (this != &rhs)
    {
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _energyPoints = rhs._energyPoints;
    }
    return *this;
}

void FragTrap::attack(std::string const &frag){
    std::cout << "FragTrap " << _name << " ataca a " << frag << ", causandole " << _attackDamage << " de daño!!" << std::endl;
}

void FragTrap::highFiveGuys() const{
    std::cout << "FragTrap " << _name << " choca los 5 y absorve a todos" << std::endl;
}
