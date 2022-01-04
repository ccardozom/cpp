#include "ScavTrap.hpp"
#include <iostream>

int	main( void ) 
{
	ClapTrap	uno("Megatron");
	ScavTrap    dos("Marvin");

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(2);

	dos.attack("Scorpion");
	dos.takeDamage(5);
	dos.beRepaired(3);
	dos.guardGate();
	return 0;
}
