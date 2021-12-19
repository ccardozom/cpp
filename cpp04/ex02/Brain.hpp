#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    public:
        Brain();
        Brain(Brain const &);
        ~Brain();

        Brain &operator=(Brain const &);

    private:
        std::string _ideas[100];
};

#endif