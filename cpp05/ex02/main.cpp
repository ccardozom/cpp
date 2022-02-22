#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){

	try
	{
		Bureaucrat bobby(121);
		//Form c101("c101", 120, 140);
		std::cout << bobby << std::endl;
		//std::cout << c101 << std::endl;
	//	c101.besigned(bobby);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n";

	Bureaucrat Staff(101);
	ShrubberyCreationForm bure("home");

	bure.ActionExec();

	std::cout << "Bureaucrat Name: " << Staff.getName() << std::endl;
	std::cout << "Grade: " << Staff.getGrade() << std::endl;
	Staff.decrementGrade();
	std::cout << "Decrement Grade: " << Staff.getGrade()  << std::endl;

	std::cout << "Form Name: " << Staff.getName() << std::endl;
	std::cout << "Form signed status: "<< bure.getSigned() << std::endl;
	std::cout << Staff << std::endl;

	try{
		bure.besigned(Staff);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << "\n";
	}
	std::cout << "Form signed status: " << bure.getSigned() << std::endl;

    return 0;
}