#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    this->_name = "default";
    this->ClapTrap::_name = this->_name + "_clap_name";
    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 50;
    this->FragTrap::_attackDamage = 30;
    std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name){
    this->ClapTrap::_name = name + "_clap_name";
    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 50;
    this->FragTrap::_attackDamage = 30;
    std::cout << "DiamondTrap constructor whith the name " << name <<  "is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diam) : _name(diam.getName()){
    this->ClapTrap::_name = diam.getName();
    this->FragTrap::_hitPoints = diam.getHitPoints();
    this->ScavTrap::_energyPoints = diam.getEnergyPoints();
    this->FragTrap::_attackDamage = diam.getAttackDamage();
    std::cout << "DiamondTrap copy constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap default destructor is called and " << getName() << "has been destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diam){
    if (this != &diam)
    {
        this->_name = diam.getName();
        this->ClapTrap::_name = diam.getName() + "_clap_name";
        this->FragTrap::_hitPoints = diam.getHitPoints();
        this->ScavTrap::_energyPoints = diam.getEnergyPoints();
        this->FragTrap::_attackDamage = diam.getAttackDamage();
    }
    return *this;
}

void DiamondTrap::whoAmI() const{
    std::cout << "I am DiamondTrap" << this->_name << " and ClapTrap " << this->ClapTrap::_name << std::endl;
}