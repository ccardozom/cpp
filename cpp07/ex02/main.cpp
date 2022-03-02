#include "iter.hpp"

int	main(){
	int a1[] = {1, 2, 3, 4 ,5};
	std::string cadena[] = {"hola", "adios", "Madrid"};

	::iter<int>(a1, sizeof(a1)/(sizeof(a1[0])), printTarget<int>);
	::iter<std::string>( cadena, sizeof(cadena)/(sizeof(cadena[0])), printTarget<std::string>);

	return 0;
}