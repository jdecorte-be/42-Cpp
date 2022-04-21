#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap("Default", 100, 100, 30)
{
    std::cout << "ClapFragTrapTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
    if(this == &frag)
        return *this;
    this->setName(frag.getName());
    this->setHealth(frag.getHealth());
    this->setEnergy(frag.getEnergy());
    this->setDamage(frag.getDamage());
    return *this;
}

FragTrap::FragTrap(const FragTrap &frag)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = frag;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HighFivesGuys called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->getHealth() <= 0 && this->getEnergy() <= 0)
    {
        std::cout << "Not enough energy or ClapTrap is dead" << std::endl;
        return;
    }
    std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getDamage() << " points of damage!" << std::endl;
    setEnergy(getEnergy() - 1);
}