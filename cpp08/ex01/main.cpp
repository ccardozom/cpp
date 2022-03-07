#include "span.hpp"
#include <iostream>

int main(){
    try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(42);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(56);
	}
	catch(const char * error)
	{
		std::cerr << error << '\n';
	}
    return 0;
}