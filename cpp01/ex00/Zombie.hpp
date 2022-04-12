#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie 
{
    public:
        void setName(const std::string &name);
        void annouce(void);
        Zombie();
        ~Zombie();
    private:
        std::string name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
