#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: type("Cat")
{
    brain = new Brain;
	std::cout << "Cat was constructed\n";
}

Cat::Cat( const Cat & src )
{
	type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
    delete brain;
	std::cout << "Cat was destroyed\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void Cat::makeSound() const
{
    std::cout << "The " << type << " meows" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


Brain	*Cat::getBrain() const
{
	return brain;
}

/* ************************************************************************** */