#include <iostream>
#include <cstdint>

struct Data {
	int i;
};

uintptr_t	serialize( Data *ptr ) {

	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data	*deserialize( uintptr_t raw ) {

	Data	*dataPtr;	

	dataPtr = reinterpret_cast<Data *>(raw);
	return dataPtr;
}

int	main( void ) {

	Data		*dataPtr = new Data;
	uintptr_t	raw;
	Data		*dataPtr2;

	std::cout << "Data ptr: " << dataPtr << std::endl;
	dataPtr->i = 10;
	std::cout << "i = " << dataPtr->i << std::endl;
	raw = serialize( dataPtr );
	std::cout << "Uint ptr: " << raw << std::endl;
	dataPtr2 = deserialize( raw );
	std::cout << "Data ptr: " << dataPtr2 << std::endl;
	std::cout << "i = " << dataPtr->i << std::endl;

	delete dataPtr;

	/*
    int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    std::cout << *p << std::endl;
    std::cout << *ch << std::endl;
    std::cout << p << std::endl;
    std::cout << ch << std::endl;
    return 0;*/

	return 0;
}