#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _gradeSing(150), _gradeExec(150), _signed(false){
    std::cout << "Form default constructor is called" << std::endl;
}

Form::Form(std::string name, int singGrade, int execGrade) : _name(name), _gradeSing(singGrade), _gradeExec(execGrade), _signed(false){
    std::cout << "Form parameter constructor is called" << std::endl;
    if (singGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    else if (singGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const &f) : _name(f.getName()), _gradeSing(f.getGradeSing()), _gradeExec(f.getGradeExec()), _signed(f.getSigned()){
    std::cout << "Form copy constructor is called" << std::endl;
}

Form::~Form(){
    std::cout << "Form default destructor is called" << std::endl;
}

Form &Form::operator=(Form const &f){
    std::cout << "Form operator is called" << std::endl;
    if (this != &f)
    {
        this->_signed = f.getSigned();
    }
    return *this;
}

std::string Form::getName() const{
    return this->_name;
}

bool Form::getSigned() const{
    return this->_signed;
}

int Form::getGradeSing() const{
    return this->_gradeSing;
}

int Form::getGradeExec() const{
    return this->_gradeExec;
}

const char *Form::GradeTooHighException::what() const throw(){
    return "GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw(){
    return "GradeTooLowException";
}

bool Form::besigned(Bureaucrat const &b){
    if (b.getGrade() > this->getGradeSing())
    {
        std::cout << b.getName() << " can't signed " << this->getName() << std::endl;
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
        std::cout << b.getName() << " sings " << this->getName() << std::endl;
    }
    return true;
}

std::ostream	&operator<<( std::ostream &o, Form const &f ) {
	o << f.getName() << " form has grade " << f.getGradeSing() << " to sign and grade " << f.getGradeExec() << " to execute.";
	return o;
}