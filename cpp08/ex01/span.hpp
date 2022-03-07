#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span(unsigned int);

        void addNumber(int);
        int shortestSpan();
        int longestSpan();

};

#endif