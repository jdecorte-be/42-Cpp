#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	this->name = "";
    this->health = 100;
	this->energy = 100;
	this->damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
    this->health = 100;
	this->energy = 100;
	this->damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << name <<" : FragTrap : Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
    std::cout << "FragTrap : Assign constructor called" << std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! Give me a high five!!!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */