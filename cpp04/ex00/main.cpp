
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

    std::cout << "\n" << std::endl;

    meta->makeSound(); //Animal class

    j->makeSound(); //Dog class

    i->makeSound(); //Cat class

    w1->makeSound(); //Wrong Animal

    w2->makeSound(); //Wrong Cat

    std::cout << "\n" << std::endl;

    Animal copy(*j);

    std::cout << "copy type: " << copy.getType() << std::endl;

    delete meta;
    delete j;
    delete i;
    delete w1;
    delete w2;

    return 0;
}