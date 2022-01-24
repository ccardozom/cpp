#include "Brain.hpp"
#include <sstream>

Brain::Brain(){
    std::cout << "Brain constructor has been called" << std::endl;
    std::ostringstream x;
    for (int i=0; i<100; i++)
    {
        x << i;
        _ideas[i] = "idea" + x.str();
    }
}

Brain::Brain(Brain const &br){
    std::cout << "Brain copy constructor has been called" << std::endl;
    for (int i=0; i<100; i++)
        _ideas[i] = br._ideas[i];
}

Brain::~Brain(){
    std::cout << "Brain destructor has been called" << std::endl;
}

Brain &Brain::operator=(Brain const &br){
    if (this != &br)
    {
    std::cout << "Brain asignment operator has been called" << std::endl;

        for (int i=0; i<100; i++)
            _ideas[i] = br._ideas[i];
    }
    return *this;
}
