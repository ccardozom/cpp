#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor is called" << std::endl;
}

Cure::Cure(Cure const &src ) : AMateria(src)
{
	std::cout << "Cure's COPY CONSTRUCTOR called" << std::endl;
	return ;
}