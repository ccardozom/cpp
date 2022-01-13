#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    public:   //metodos
        ClapTrap();
        ClapTrap(std::string);
        ~ClapTrap();
        ClapTrap(ClapTrap const &);

        ClapTrap &operator=(ClapTrap const &);

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void attack(std::string const &target);

        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        
    protected: //atributos
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        std::string _name;
};

#endif