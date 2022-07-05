#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog
	: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );
		Animal	&operator=( Animal const &rhs );


		Brain *getBrain() const;
		void getIdea(int index);
        void makeSound() const;

	private :
		Brain *brain;
};

#endif /* ************************************************************* DOG_H */