#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
//#include "ICharacter.hpp"

class ICharacter;

class AMateria{
    public:
        AMateria();
        AMateria(AMateria const &);
        AMateria(std::string const &type);
        virtual ~AMateria();

        AMateria &operator=(AMateria const &);

        std::string const &getType() const;

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

    protected:
        std::string type;
};
#endif