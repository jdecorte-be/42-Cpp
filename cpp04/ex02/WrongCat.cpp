#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "Default constructor for WrongCat called\n";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "Assignement operator for WrongCat called" << std::endl;
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}


void WrongCat::makeSound() const
{
    std::cout << "The " << type << " meows" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */