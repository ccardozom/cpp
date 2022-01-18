#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(Dog const &);
        ~Dog();

        Dog &operator=(Dog const &);
        void makeSound() const;
    
    private:
        Brain *_brain;

};

#endif