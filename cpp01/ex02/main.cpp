#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Contenido de str: " << str << std::endl;
    std::cout << "Direccion de memoria de str: " << &str << std::endl;
    std::cout << "Direccion a la que apunta stringPTR: " << stringPTR << std::endl;
    std::cout << "Direccion de memoria de stringREF: " << &stringREF << std::endl;
    std::cout << "Contenido de *stringPTR: " << *stringPTR << std::endl;
    std::cout << "Contenido de &stringREF: " << stringREF << std::endl;
    return(0);
}