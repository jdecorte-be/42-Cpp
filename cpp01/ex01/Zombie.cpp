#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
    std::cout << "Zombie Constructor Called" << std::endl;
}

Zombie::Zombie(std::string name)
	: name(name)
{
    std::cout << "Zombie Constructor Called" << std::endl;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
    std::cout << this->name << ": Destructor Called" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


void Zombie::setName(const std::string &name)
{
    this->name = name;
}



/* ************************************************************************** */
