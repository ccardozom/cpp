#include "ClapTrap.hpp"
#include <iostream>

int	main( void ) 
{
	ClapTrap clap("");

	clap.attack("Marvin");
	clap.takeDamage(1);
	clap.beRepaired(5);
	return 0;
}
