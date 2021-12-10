#include "ClapTrap.hpp"
#include <iostream>

int	main( void ) 
{

	ClapTrap    uno("Megatron");

	uno.attack("Marvin");
	uno.takeDamage(5);
	uno.beRepaired(3);
	return 0;
}
