#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) 
{
	ClapTrap uno("Megatron");
	ScavTrap dos("Marvin");
	FragTrap tres("Tanos");

	std::cout << "\n" << std::endl;

	uno.attack("Sub-Zero");
	uno.takeDamage(5);
	uno.beRepaired(3);

	std::cout << "\n" << std::endl;

	dos.attack("LiuKang");
	dos.takeDamage(10);
	dos.beRepaired(5);
	dos.guardGate();

	std::cout << "\n" << std::endl;

	tres.attack("Scorpion");
	tres.takeDamage(30);
	tres.beRepaired(5);
	tres.highFiveGuys();

	std::cout << "\n" << std::endl;

	return 0;
}
