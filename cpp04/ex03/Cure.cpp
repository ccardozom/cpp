#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor is called" << std::endl;
}

Cure::Cure(Cure const &src ) : AMateria(src)
{
	std::cout << "Cure's COPY CONSTRUCTOR called" << std::endl;
	*this = src;
}

Cure::~Cure(){
	std::cout << "Cure Destructor is called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs){
	std::cout << "Cure operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Cure::clone(void) const{
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}