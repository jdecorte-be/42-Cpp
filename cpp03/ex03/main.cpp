#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap di4mondtp("di4mondtp");
		di4mondtp.attack("Handsome Jack");
		di4mondtp.takeDamage(6);
		di4mondtp.beRepaired(4);
		di4mondtp.takeDamage(3);
		di4mondtp.guardGate();
		di4mondtp.highFivesGuys();
		di4mondtp.whoAmI();
		di4mondtp.beRepaired(8);
		di4mondtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap fr4gtp("fr4gtp");
		fr4gtp.attack("Handsome Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap sc4vtp("sc4vtp");
		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap cl4ptp("cl4ptp");
		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}
}