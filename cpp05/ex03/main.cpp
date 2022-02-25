#include "Intern.hpp"

int	main( void ) {

	Intern	jim;
	Form	*pForm;

	try {
		pForm = jim.makeForm( "robotomy request", "Bender" );
		delete pForm;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}