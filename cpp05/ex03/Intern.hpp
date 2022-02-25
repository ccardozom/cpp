#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    public:
        Intern();
        Intern(Intern const &);
        ~Intern();

        Intern	&operator=( Intern const &rhs );
        Form *makeForm( std::string name, std::string target );

	class UnknownFormException : public std::exception {
	    public:
			virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &o, Intern const &rhs );

#endif