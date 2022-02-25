#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor is called" << std::endl;
}

Intern::Intern(Intern const &copy){
    std::cout << "Intern copy constructor is called" << std::endl;
    *this = copy;
}

Intern::~Intern(){
    std::cout << "Intern destructor is called" << std::endl;
}

Intern &Intern::operator=(Intern const &s){
    std::cout << "Intern operator= is called" << std::endl;
    std::cout << this << " y " << &s << " son iguales o no" << std::endl;
    if (this == &s)
		return *this;
	return *this;
}

Form	*Intern::makeForm( std::string name, std::string target ) {

	Form		*ret = NULL;
	std::string	nameForm[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form		*form[3] = { new ShrubberyCreationForm( target ), new RobotomyRequestForm( target ), new PresidentialPardonForm( target ) };

	for (int idx = 0; idx < 3; idx++) {

		if (nameForm[idx] == name) {

			std::cout << "Intern creates " << form[idx]->getName() << "." << std::endl;
			ret = form[idx];
		}
		else
			delete form[idx];
	}
	if (!ret)
		throw UnknownFormException();
	return ret;
}

const char	*Intern::UnknownFormException::what() const throw() {

	return "Unknown form name.";
}