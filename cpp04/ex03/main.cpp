#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(){
    AMateria *materia = new Ice("ice");
    
    
    delete materia;
    return 0;
}