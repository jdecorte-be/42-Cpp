#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"


class Cure
	: public AMateria
{

	public:
		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif /* ************************************************************ CURE_H */