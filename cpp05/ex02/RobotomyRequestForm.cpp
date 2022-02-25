#include "RobotomyRequestForm.hpp"
#include <time.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default"){
    std::cout << "RobotomyRequestForm default constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "RobotomyRequestForm constructor with target is called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getName(), copy.getGradeSing(), copy.getGradeExec()), _target(copy._target){
    std::cout << "RobotomyRequestForm copy constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &s){
    std::cout << "RobotomyRequestForm operator= is called" << std::endl;
    if (this != &s)
    {
        _target = s._target;
    }
    return *this;
}

void RobotomyRequestForm::ActionExec() const{
    srand(time(NULL));
	int	randomNb = rand() % 2;

	std::cout << "rrrrrrrrrrrrr...gggrgrggrrgrrgrgr...rizzz..." << std::endl;
	if (randomNb)
		std::cout << this->_target << " has been robotomied successfully." << std::endl;
	else
		std::cout << "robotomy request to " << this->_target << " has failed." << std::endl;
}