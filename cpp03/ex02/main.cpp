#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) 
{
	ClapTrap uno("Megatron");
	ScavTrap dos("Marvin");
	ScavTrap tres(dos);
	FragTrap cuatro("Tanos");

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(3);

	dos.attack("LiuKang");
	dos.takeDamage(10);
	dos.beRepaired(5);
	dos.guardGate();

	tres.attack("Lee");
	tres.takeDamage(15);
	tres.beRepaired(2);
	tres.guardGate();

	cuatro.attack("Scorpion");
	cuatro.takeDamage(30);
	cuatro.beRepaired(5);
	cuatro.highFiveGuys();

	return 0;
}
