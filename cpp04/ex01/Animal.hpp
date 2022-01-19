#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal{
    public:
        Animal();
        Animal(Animal const &);
        virtual ~Animal();

        Animal &operator=(Animal const &);

        virtual void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif