#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){

   //Animal *A = new Animal();

    Animal *dog = new Dog();
    Animal *cat = new Cat();

   // A->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
    
    return 0;
}