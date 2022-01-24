#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"){
    std::cout << "Bureaucrat default constructor is calle" << std::endl;
    this->_grade = 100;
}

Bureaucrat::Bureaucrat(int grade) : _name("Default"){
    std::cout << "Bureaucrat constructor whith grade parameter" << std::endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout 
}
