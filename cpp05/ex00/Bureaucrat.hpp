#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    public:
        Bureaucrat();
        Bureaucrat(int);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &);
        Bureaucrat &operator=(Bureaucrat const &);

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();


    private:
        std::string const _name;
        int _grade;
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &);


#endif