#include "ScavTrap.hpp"
#include <iostream>

int	main( void ) 
{
	ClapTrap uno("Megatron");
	ScavTrap dos("Marvin");
	ScavTrap tres(dos);

	std::cout << "\n" << std::endl;

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(2);

	std::cout << "\n" << std::endl;

	dos.attack("Scorpion");
	dos.takeDamage(5);
	dos.beRepaired(3);
	dos.guardGate();

	std::cout << "\n" << std::endl;

	tres.attack("Lee");
	tres.takeDamage(15);
	tres.beRepaired(2);
	tres.guardGate();

	std::cout << "\n" << std::endl;

	return 0;
}
