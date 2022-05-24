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

        void makeSound() const;
        virtual Brain   *getBrain() const;

	private:
		std::string type;
        Brain *brain;
};

#endif /* ************************************************************* DOG_H */