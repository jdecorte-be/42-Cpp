#include "Zombie.hpp"

int	main()
{
	Zombie	*Horde = zombieHorde(5, "Member");

	std::cout << std::endl;

	Horde[0].announce();
	Horde[1].announce();
	Horde[2].announce();
	Horde[3].announce();
	Horde[4].announce();

	std::cout << std::endl;
	
	delete [] Horde;

	return (0);
}