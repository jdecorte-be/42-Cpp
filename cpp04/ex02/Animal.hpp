#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
    : public Brain
{
    private:
		Animal();

	public:

        Animal(const std::string type);
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

        virtual void makeSound() const;
        std::string getType() const;
        virtual Brain *getBrain() const = 0;

	protected:
        std::string type;
        

};


#endif /* ********************************************************** ANIMAL_H */