#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){

   //Animal *A = new Animal();

    Animal *dog = new Dog();
    Animal *cat = new Cat();

    std::cout << "\n" << std::endl;

   // A->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n" << std::endl;

    delete dog;
    delete cat;
    
    return 0;
}