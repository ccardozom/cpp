#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(DiamondTrap const &);
        ~DiamondTrap();

        DiamondTrap &operator=(DiamondTrap const &);

        void    attack(std::string const &target);
        void    whoAmI() const;
};

#endif