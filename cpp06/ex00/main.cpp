#include <iostream>
#include <climits>
#include <cfloat>

void doubleOption(std::string str){
    try
    {
        double f = static_cast<double>(std::stod(str));
        if (std::isprint(static_cast<int>(f)))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else if (f >= CHAR_MIN && f <= CHAR_MAX)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (f > INT_MIN && f < INT_MAX)
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        else
            std::cout << "int: impossible" << static_cast<char>(f) << std::endl;
	    if ( f - static_cast<int>(f) == 0 )
		    std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
	    else
		    std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
        if (f - static_cast<int>(f) == 0)
            std::cout << "double: " << f << ".0"<< std::endl;
        else
            std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << ": error: out of range\n";
    }
    
}

void floatOption(std::string str){
    try
    {
        float f = static_cast<float>(std::stof(str));
        if (std::isprint(static_cast<int>(f)))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else if (f >= CHAR_MIN && f <= CHAR_MAX)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (f >= INT_MIN && f <= INT_MAX)
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        else
            std::cout << "int: impossible" << static_cast<char>(f) << std::endl;
        if (f - static_cast<int>(f) == 0)
            std::cout << "float: " << f << ".0f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
        if (f - static_cast<int>(f) == 0)
            std::cout << "double: " << f << ".0"<< std::endl;
        else
            std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << ": error: out of range\n";
    }
    
}

void intOption(std::string str){
    try
    {
        int i = static_cast<int>(std::stoi(str));
        if (std::isprint(i))
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        else if (i >= CHAR_MIN && i <= CHAR_MAX)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(i) << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << ": error: out of range\n";
    }   
}

void charOption(std::string str){
    char c = static_cast<char>(str[0]);
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

int detectType(std::string str){
    int option = 4;
    if (str.size() == 1 && (str[0] < '0' || str[0] > '9'))
        option = 1;
    else if(str.find(".") == std::string::npos && str.find("n") == std::string::npos)
        option = 2;
    else if (str[str.size() - 1] == 'f' && str != "-inf" && str != "+inf")
        option = 3;
    return option;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: Parameter not found, one is needed" << std::endl;
        return -1;
    }
    else if (argc > 2)
    {
        std::cout << "Error: you can send only one parameter" << std::endl;
        return -1;
    }
    std::string str = static_cast<std::string>(argv[1]);
    int option = detectType(str);
    switch(option){
        case 1: charOption(str); break;
        case 2: intOption(str); break;
        case 3: floatOption(str); break;
        case 4: doubleOption(str); break;
    }

    return 0;
}