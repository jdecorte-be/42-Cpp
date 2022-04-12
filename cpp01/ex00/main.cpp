#include "Zombie.hpp"

int main()
{
    randomChump("test1");
    Zombie *zombie = newZombie("test2");
    zombie->annouce();
    delete zombie;
}