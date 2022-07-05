#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Ice
	: public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );


		std::string const & getType() const; //Returns the materia type
		void setType( std::string const &type );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);



};

#endif /* ************************************************************* ICE_H */