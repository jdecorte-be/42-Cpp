#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: type("Dog")
{
    brain = new Brain;
	std::cout << "Dog was constructed\n";
}

Dog::Dog( const Dog & src )
{
	type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
    delete brain;
	std::cout << "Dog was destroyed\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
    std::cout << "The " << type << " barks" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain   *Dog::getBrain() const
{
    return brain;
}

/* ************************************************************************** */