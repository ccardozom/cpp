#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
    private:
        std::string _name;
        AMateria *_inventory[4];

    public:
        Character();
        Character(std::string);
        Character(Character const &);
        ~Character();

        Character &operator=(Character const &);

        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        std::string const &getName() const;
};


#endif