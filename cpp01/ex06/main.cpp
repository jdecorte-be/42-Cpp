#include "Harl.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Usage : ./ex06 <error>" << std::endl;
		return 1;
	}
	Harl karen;
	karen.complain(av[1]);
}