#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"   

class Ice : public AMateria{
    public:
        Ice();
        Ice(Ice const &);
        Ice(std::string const &type);
        virtual ~Ice();

        Ice &operator=(Ice const &);

        AMateria *clone() const;
};
#endif