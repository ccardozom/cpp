
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *w1 = new WrongAnimal();
    const WrongAnimal *w2 = new WrongCat();

    Animal clon(*i);
    clon.makeSound();

    meta->makeSound(); //Animal class make not sound

    j->makeSound(); //Dog class makes a Dog song

    i->makeSound(); //Cat class makes a Cat song

    w1->makeSound(); //Wrong Animal song

    w2->makeSound(); //Wrong Cat song 

    delete meta;
    delete j;
    delete i;
    delete w1;
    delete w2;

    return 0;
}