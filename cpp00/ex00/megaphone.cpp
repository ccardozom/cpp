#include <iostream>

int	main(int argc, char *argv[])
{
	int pos;
	int caracter;

	pos = 1;
	while (argv[pos])
	{
		caracter = 0;
		while (argv[pos][caracter])
		{
			std::cout << (char)std::toupper(argv[pos][caracter]);
			caracter++;
		}
		pos++;
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}