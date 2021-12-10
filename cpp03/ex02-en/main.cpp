#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) 
{
	ClapTrap	uno("Megatron");
	ScavTrap    dos("Marvin");
	FragTrap    tres("Blackhole");

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(3);

	dos.attack("LiuKang");
	dos.takeDamage(10);
	dos.beRepaired(5);
	dos.guardGate();

	tres.attack("Scorpion");
	tres.takeDamage(30);
	tres.beRepaired(5);
	tres.highFiveGuys();

	return 0;
}
