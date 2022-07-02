#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->health = FragTrap::health;
	ScavTrap::setEnergy();
	this->damage = FragTrap::damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " : DiamondTrap : Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
    std::cout << "DiamondTrap : Assign constructor called" << std::endl;
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

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << " and for ClapTrap, I am " << ClapTrap::name << std::endl;
}

void		DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */