#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
	: AMateria("ice")
{
}

Ice::Ice( const Ice & src )
	: AMateria(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const
{
	Ice *ret_mat = new Ice();
	return ret_mat;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Ice::setType( std::string const &type )
{
	this->type = type;
}


/* ************************************************************************** */