#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap " << _name << " constructor " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "El constructor de ScavTrap ha sido invocado!!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scav){
    std::cout << " El constructor copia de " << _name << "ya esta aquí" << std::endl;
    *this = scav;
}

ScavTrap::~ScavTrap(){
    std::cout << "Destructor de ScavTrap " << _name << " ha sido invocado y la destrucción se apoderó de todo" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs){
    if (this != &rhs)
    {
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _energyPoints = rhs._energyPoints;
    }
    return *this;
}

void ScavTrap::attack(std::string const &scav){
    std::cout << "ScavTrap " << _name << " ataca a " << scav << ", causandole " << _attackDamage << " de daño!!" << std::endl;
}

void ScavTrap::guardGate() const{
    std::cout << "ScavTrap " << _name << " entra en modo portero -- WTF" << std::endl;
}


