#include "Zombie.hpp"

int	main()
{
	Zombie	StackZombie("StackZombie");
	Zombie	*HeapZombie1 = newZombie("HeapZombie1");
	Zombie	*HeapZombie2 = new Zombie("HeapZombie2");

	std::cout << std::endl;

	StackZombie.announce();
	HeapZombie1->announce();
	HeapZombie2->announce();

	std::cout << std::endl;

	randomChump("RandomZombie");

	std::cout << std::endl;

	delete HeapZombie1;

	delete HeapZombie2;

	return (0);
}