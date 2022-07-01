#include "ClapTrap.hpp"


int	main( void )
{
	ClapTrap cl4ptp("cl4ptp");
	cl4ptp.attack("Handsome Jack");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(4);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(17);
}