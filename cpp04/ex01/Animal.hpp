#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# include "Brain.hpp"

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		virtual Animal &		operator=( Animal const & rhs );

        virtual void makeSound() const;
        const std::string &getType() const;

		virtual Brain		*getBrain( void ) const = 0;
		virtual void		getIdea(int index ) = 0;

	protected:
        std::string type;

};


#endif /* ********************************************************** ANIMAL_H */