#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    int n=2;
    Animal *array[n];

    std::cout << "\n" << std::endl;

    for (int i=0; i<n; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    std::cout << "\n" << std::endl;

    array[1]->makeSound();
    array[0]->makeSound();

    std::cout << "\n" << std::endl;

    for (int i=0; i < n; i++)
        delete array[i];

    std::cout << "\n" << std::endl;

    // Dog basic;
    // Dog tmp = basic;

    // basic.makeSound();
    // tmp.makeSound();

    return 0;
}
