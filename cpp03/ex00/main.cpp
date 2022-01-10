#include "ClapTrap.hpp"
#include <iostream>

int	main( void ) 
{
	ClapTrap clap("Megatron");

	clap.attack("Marvin");
	clap.takeDamage(1);
	clap.beRepaired(5);
	return 0;
}
