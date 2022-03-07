#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostrea
#include <vector>

class Span{
    private:
        size_t _N;
        std::vector<int> _vec;
    public:
        Span(size_t);

        void addNumber(int);
        int shortestSpan();
        int longestSpan();

};

#endif