#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie Constructor Called" << std::endl;
}

Zombie::Zombie(std::string name)
	: name(name)
{
    std::cout << "Zombie Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destructor Called" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->name = name;
}
