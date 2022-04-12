#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(10, "test");
    for(int i = 0; i < 10; i++)
        zombie[i].annouce();
    zombie->annouce();
    delete[] zombie;
}