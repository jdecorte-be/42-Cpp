#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	this->name = "Default";
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;

}

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << name <<" : ScavTrap : Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
    std::cout << "ScavTrap : Assign constructor called" << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
    if(health <= 0 && energy <= 0)
    {
        std::cout << name << " : Not enough energy or ClapTrap is dead" << std::endl;
        return;
    }
    std::cout << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    energy--;
}

void ScavTrap::guardGate()
{
	std::cout << name << " entered Gate Keeper mode!!!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */