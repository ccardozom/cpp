#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(ScavTrap const &);
        ~ScavTrap();

        ScavTrap &operator=(ScavTrap const &);

        void    guardGate() const;
        void    attack(std::string const &);
};

#endif