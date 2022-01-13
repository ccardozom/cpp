#include "ScavTrap.hpp"
#include <iostream>

int	main( void ) 
{
	ClapTrap uno("Megatron");
	ScavTrap dos("Marvin");
	ScavTrap tres(dos);

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(2);

	dos.attack("Scorpion");
	dos.takeDamage(5);
	dos.beRepaired(3);
	dos.guardGate();

	tres.attack("Lee");
	tres.takeDamage(15);
	tres.beRepaired(2);
	tres.guardGate();

	return 0;
}
