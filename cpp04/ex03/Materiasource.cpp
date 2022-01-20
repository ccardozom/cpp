#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource default constructor is called" << std::endl;
    for (int i=0; i<4; i++)
        source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    std::cout << "MateriaSource copy constructor is called" << std::endl;
    for (int i=0; i<4; i++)
    {
        if (src.source[i] != NULL)
            this->source[i] = src.source[i]->clone();
    }
}

MateriaSource::~MateriaSource(){
    std::cout << "MaterSource destructor is called" << std::endl;
    for (int i=0; i<4; i++)
    {
        if (this->source[i] != NULL)
            delete this->source[i];
    }
}

void MateriaSource::learnMateria( AMateria *m)
{
	for (int i=0; i<4; i++)
	{
		if (this->source[i] == NULL)
		{
			this->source[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria( std::string const &type)
{
    std::cout << type << " materia created" << std::endl;
	for (int i=0; i<4; i++)
	{
		if (this->source[i] && this->source[i]->getType() == type)
			return (this->source[i]->clone());
	}
	return (0);
}