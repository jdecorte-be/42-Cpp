#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string& name)
	: name(name)
{
	for(int i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character( const Character & src )
{
	for(int i = 0; i < 4; i++)
	{
		if ((src.inv)[i])
			(this->inv)[i] = (src.inv[i])->clone();
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if(inv[i])
			delete inv[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->inv[i])
				delete this->inv[i];
			if (rhs.inv[i])
				this->inv[i] = (rhs.inv[i])->clone();
		}
		name = rhs.name;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return ;
	while ((this->inv)[i] != 0 && i < 4)
		i++;
	(this->inv)[i] = m;
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx >= 4)
		std::cout << name << " : The index need to be  between 0 and 3" << std::endl;
	else if (!(inv[idx]))	
		std::cout << this->name << " : Material at slot " << idx << " don't exist " << std::endl;
	else
	{
		AMateria *ptr = (this->inv)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << std::endl;
		inv[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx >= 4 || !(inv[idx]))
	{
		std::cout << name << " : Enter a valid index or target not exist" << std::endl;
		return ;
	}
	inv[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return this->name;
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return inv[idx];
}



/* ************************************************************************** */