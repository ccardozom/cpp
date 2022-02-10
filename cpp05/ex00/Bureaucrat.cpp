#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"){
    std::cout << "Bureaucrat default constructor is calle" << std::endl;
    this->_grade = 100;
}

Bureaucrat::Bureaucrat(int grade) : _name("JJ"){
    std::cout << "Bureaucrat constructor whith grade parameter" << std::endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat default destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName()){
    std::cout << "Bureaucrat copy constructor is called" << std::endl;
    this->_grade = copy.getGrade();
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("GradeTooLowException");
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void Bureaucrat::decrementGrade(){
    this->_grade++;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


void Bureaucrat::incrementGrade(){
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b){
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}