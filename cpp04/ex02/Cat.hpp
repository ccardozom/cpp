#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(Cat const &);
        ~Cat();

        Cat &operator=(Cat const &);
        virtual void makeSound() const;
    
    private:
        Brain *_brain;
};

#endif