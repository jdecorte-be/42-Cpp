#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destructor Called" << std::endl;
}

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->name = name;
}

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie;
    zombie->setName(name);
    return zombie;
}

void randomChump( std::string name )
{
    Zombie zombie;
    zombie.setName(name);
    zombie.annouce();
}
