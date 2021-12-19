#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria"

class Cure : public AMateria{
    public:
        Cure();
		Cure( Cure const & src );
		~Cure();

        Cure &operator=(Cure const &rhs);

        AMateria *clone() cosnt;
        void use(ICharacter &target);
}

#endif