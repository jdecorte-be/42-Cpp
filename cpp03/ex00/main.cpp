#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap John("John");
	John.attack("Handsome Jack");
	John.takeDamage(6);
	John.beRepaired(4);
	John.takeDamage(3);
	John.beRepaired(8);
	John.takeDamage(17);
}