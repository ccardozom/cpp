#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form{
    private:
        std::string const _name;
        int const _gradeSing;
        int const _gradeExec;
        bool _signed;

    public:

        Form();
        Form(std::string, int, int);
        Form(Form const &);
        ~Form();

        Form &operator=(Form const &);

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw(); 
        };

        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw(); 
        };

        std::string getName() const;
        bool getSigned() const;
        int getGradeSing() const;
        int getGradeExec() const;

        bool besigned(Bureaucrat const &);
};

std::ostream	&operator<<( std::ostream &o, Form const &rhs );

#endif