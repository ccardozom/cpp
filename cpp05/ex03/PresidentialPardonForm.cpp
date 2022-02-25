#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default"){
    std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "PresidentialPardonForm constructor with target is called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getName(), copy.getGradeSing(), copy.getGradeExec()), _target(copy._target){
    std::cout << "PresidentialPardonForm copy constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &s){
    std::cout << "PresidentialPardonForm operator= is called" << std::endl;
    if (this != &s)
    {
        _target = s._target;
    }
    return *this;
}

void PresidentialPardonForm::ActionExec() const{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;

}