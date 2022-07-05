#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor for WrongAnimal called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const
{
    std::cout << "Animals can make any kind of noise" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return this->type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */