#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
	: type("Animal")
{
	std::cout << "Animal was constructed\n";
}

Animal::Animal(const std::string type)
	: type(type)
{
	std::cout << "Animal was constructed\n";
}


Animal::Animal( const Animal & src )
{
	type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal was destroyed\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
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

void Animal::makeSound() const
{
    std::cout << "Animals can make any kind of noise" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const
{
    return type;
}

/* ************************************************************************** */