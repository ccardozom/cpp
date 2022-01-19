#include "DiamondTrap.hpp"

int	main( void ) 
{
	DiamondTrap	uno("Megatron");

	std::cout << "\n" << std::endl;

	uno.attack("Scorpion");
	uno.takeDamage(30);
	uno.beRepaired(5);
	uno.guardGate();
	uno.highFiveGuys();
	uno.whoAmI();

	std::cout << "\n" << std::endl;

	return 0;
}
