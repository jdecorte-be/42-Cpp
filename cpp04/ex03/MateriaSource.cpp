#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for( int i = 0; i < 4; i++ )
		skill[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4; i++)
	{
		if ((src.skill)[i])
			(this->skill)[i] = (src.skill[i])->clone();
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for( int i = 0; i < 4; i++ )
	{
		if(skill[i])
			delete skill[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 4; i++)
		{
			if(skill[i])
				delete skill[i];
			if(rhs.skill[i])
				skill[i] = rhs.skill[i]->clone();
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *src)
{
	int i = 0;


	while ((this->skill)[i] != 0 && i < 4)
		i++;
	(this->skill)[i] = src;
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4 && skill[i]; i++)
	{
		if(type == skill[i]->getType())
			return skill[i]->clone();
	}
	return NULL;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */