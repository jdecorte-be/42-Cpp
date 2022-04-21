#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const std::string name, int health, int energy, int damage);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &clap);
        ClapTrap(const ClapTrap &clap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(const std::string& name);
        void setHealth(unsigned int health);
        void setEnergy(unsigned int energy);
        void setDamage(unsigned int damage);
        std::string getName() const;
        int getHealth() const;
        int getEnergy() const;
        int getDamage() const;
    private:
        std::string name;
        int health;
        int energy;
        int damage;


};

#endif