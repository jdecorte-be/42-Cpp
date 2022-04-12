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

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
        zombie[i].setName(name);
    return zombie;
}