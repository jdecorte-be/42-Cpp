#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor for Dog called\n";
}

Dog::Dog( const Dog & src )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	brain = new Brain(*(src.getBrain()));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor for Dog called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

Animal	&Dog::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain(*rhs.getBrain());
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

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void Dog::getIdea(int index)
{
	std::cout << this->brain->ideas[index] << std::endl;
}

/* ************************************************************************** */