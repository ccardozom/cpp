#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default"){
    std::cout << "ShrubberyCreationForm default constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm target is called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.getName(), copy.getGradeSing(), copy.getGradeExec()), _target(copy._target){
    std::cout << "ShrubberyCreationForm copy constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s){
    std::cout << "ShrubberyCreationForm operator= is called" << std::endl;
    if (this != &s)
    {
        _target = s._target;
    }
    return *this;
}

void ShrubberyCreationForm::ActionExec() const{
    std::string const tree[1] = {
		"                     **            \n"\
		"        **         ******          \n"\
		"       ****      **********        \n"\
		"      ********  *************      \n"\
		"    ****************************   \n"\
		"  ***** ### ******** ### ********* \n"\
		"        ###          ###           \n"\
		"        ###          ###           \n"
	};

    std::string FileName = this->_target + "_shrubbery.txt";
    std::ofstream File;
    File.open(FileName.c_str(), std::ios::trunc);
    File << tree[0];
	File.close();
}