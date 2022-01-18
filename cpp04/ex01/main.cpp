#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    int n=2;
    Animal *array[n];

    for (int i=0; i<n; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    array[1]->makeSound();
    array[0]->makeSound();

    for (int i=0; i<100; i++)
        std::cout << array[1] << std::endl;

    for (int i=0; i < n; i++)
        delete array[i];
    Dog basic;
    Dog tmp = basic;
    return 0;
}
