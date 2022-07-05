#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource
	: public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		virtual void learnMateria(AMateria *src);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria *skill[4];

};

#endif /* *************************************************** MATERIASOURCE_H */