#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    public:
        Bureaucrat();
        Bureaucrat();
        Bureaucrat(Bureaucrat const &);
        void GradeTooHighException();
        void GradeTooLowException();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int);
        void decrementGrade(int);


    private:
        std::string const _name;
        int _grade;
};


#endif