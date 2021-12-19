
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

    std::cout << meta->getType() << " is an animal ";
    std::cout << "and his sound is ";
    meta->makeSound();

    std::cout << j->getType() << " is an animal ";
    std::cout << "and his sound is ";
    j->makeSound();

    std::cout << i->getType() << " is an animal ";
    std::cout << "and his sound is ";
    i->makeSound();

    std::cout << w1->getType() << " is a wrong animal ";
    std::cout << "and his sound is ";
    w1->makeSound();

    std::cout << w2->getType() << " is a wrong animal ";
    std::cout << "and his sound is ";
    w2->makeSound();
    delete meta;
    delete j;
    delete i;
    delete w1;
    delete w2;

    return 0;
}