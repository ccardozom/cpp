#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &);
        ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &rhs);

        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);

    private:
        AMateria *source[4];
};

#endif