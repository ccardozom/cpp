#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(){
    IMateriaSource *src = new MateriaSource();

    std::cout << "\n" << std::endl;

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    std::cout << "\n" << std::endl;

    ICharacter *me = new Character("me");
    AMateria *tmp;

    std::cout << "\n" << std::endl;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "\n" << std::endl;

    ICharacter *bob = new Character("bob");

    std::cout << "\n" << std::endl;

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\n" << std::endl;

    delete bob;
    delete me;
    delete src;
    return 0;
    return 0;
}