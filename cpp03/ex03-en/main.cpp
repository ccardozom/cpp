#include "DiamondTrap.hpp"

int	main( void ) 
{
	DiamondTrap	uno("Megatron");

	uno.attack("Scorpion");
	uno.takeDamage(30);
	uno.beRepaired(5);
	uno.guardGate();
	uno.highFiveGuys();
	uno.whoAmI();

	return 0;
}
