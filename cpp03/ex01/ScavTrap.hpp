#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include <iostream>

class ScavTrap 
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &clap);
        ScavTrap(const ScavTrap &clap);
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