#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &clap);
        ClapTrap(const ClapTrap &clap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int health;
        int energy;
        int damage;


};

#endif