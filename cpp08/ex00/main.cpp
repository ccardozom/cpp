//#include "array.hpp"
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(){
	std::vector<int> vec1;
	int value = 5;

	for(int i=0; i < 10; i++)
		vec1.push_back(i);
	try{
		std::cout << "Vector vec1 tiene " << vec1.size() << " elementos" << std::endl;
		std::cout << "vec1{";
		for (unsigned long i=0; i < vec1.size(); i++)
		{
			if (vec1[i] != vec1.back())
				std::cout << vec1[i] << ", ";
			else
				std::cout << vec1[i];
		}
		std::cout << "}" << std::endl;
		std::cout << "Buscamos con la funcion easyfind(T &t, int to_find) el valor " << value << " en el vector" << std::endl;
		std::vector<int>::iterator i = easyfind(vec1, value);
		std::cout << *i << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}