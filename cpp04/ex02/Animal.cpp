#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
	: type("Animal")
{
	std::cout << "Default constructor for Animal called\n";
}

Animal::Animal( const Animal & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Destructor for Animal called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
    std::cout << "Animals can make any kind of noise" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Animal::getType() const
{
    return this->type;
}

/* ************************************************************************** */