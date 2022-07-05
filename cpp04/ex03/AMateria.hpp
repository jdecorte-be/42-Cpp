#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:
		AMateria(std::string const & type);
		virtual ~AMateria(){}

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:
		std::string type;

};

#endif /* ******************************************************** AMATERIA_H */