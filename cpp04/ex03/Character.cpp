#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string& name)
	: name(name)
{
	for(int i = 0; i < 4; i++)
		inv[i] = NULL;
	for(int i = 0; i < 100; i++)
		tofree[i] = NULL;
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
	for (int i = 0; tofree[i] && i < 100; i++)
	{
		if(tofree[i])
			delete tofree[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inv[i])
			delete this->inv[i];
		if (rhs.inv[i])
			this->inv[i] = (rhs.inv[i])->clone();
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
	if(idx >= 0 && idx < 4 && inv[idx])
	{
		add_free(inv[idx]);
		inv[idx] = 0;
	}
	return;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && inv[idx])
	{
		inv[idx]->use(target);
		unequip(idx);
	}
}

void Character::add_free(AMateria *m)
{
	int i = 0;

	if(!m) return;
	while(tofree[i] && i < 100)
		i++;
	if(tofree[i])
		delete tofree[i];
	tofree[i] = m;
	std::cout << "---->" << m->getType() << std::endl;
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