#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
    : name(""), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : name(name), health(10), energy(10), damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
    std::cout << "ClapTrap : Copy constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << name << " : ClapTrap : Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
    std::cout << "ClapTrap : Assign constructor called" << std::endl;
	if ( this != &rhs )
	{
		name = rhs.name;
		health = rhs.health;
		energy = rhs.energy;
		damage = rhs.damage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target)
{
    if(health <= 0 && energy <= 0)
    {
        std::cout << name << " : Not enough energy or ClapTrap is dead" << std::endl;
        return;
    }
    std::cout << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    energy--;
}

void ClapTrap::takeDamage(int amount)
{
    if(health <= amount)
    {
        std::cout << name << " is dead" << std::endl;
        health = 0;
    }
    else
    {
        health -= amount;
        std::cout << name << " has taken " << amount << " damage" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    health += amount;
    std::cout << name << " has " << amount << " damage repaired" << std::endl;
    energy--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */