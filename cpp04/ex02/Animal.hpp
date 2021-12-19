#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    public:
        Animal();
        Animal(Animal const &);
        virtual ~Animal();

        Animal &operator=(Animal const &);

        virtual void makeSound() const = 0;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif