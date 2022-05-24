#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat
	: public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

        void makeSound() const;
        virtual Brain   *getBrain() const;

	private:
		std::string type;
        Brain *brain;

};




#endif /* ************************************************************* CAT_H */