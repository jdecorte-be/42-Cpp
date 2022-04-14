#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name(""), health(10), energy(10), damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : name(name), health(10), energy(10), damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap::~ClapTrap()
{
    std::cout << name <<" : Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    std::cout << "Assign constructor called" << std::endl;
    if(this == &clap)
        return *this;
    name = clap.name;
    health = clap.health;
    energy = clap.energy;
    damage = clap.damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(health <= 0 && energy <= 0)
    {
        std::cout << "Not enough energy or ClapTrap is dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(health <= amount)
    {
        std::cout << "ClapTrap is dead" << std::endl;
        health = 0;
    }
    else
    {
        health -= amount;
        std::cout << "ClapTrap has taken " << amount << " damage" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    health += amount;
    std::cout << "ClapTrap has " << amount << " damage repaired" << std::endl;
    energy--;
}