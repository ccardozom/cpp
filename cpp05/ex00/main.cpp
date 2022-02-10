#include "Bureaucrat.hpp"

int main(){

    Bureaucrat	b( 1 );

	try {
		Bureaucrat	a( 151 );
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b << std::endl;

	try {
		b.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << b << std::endl;

	try {
		b.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b << std::endl;

    return 0;
}