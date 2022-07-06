#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character
	: public ICharacter
{

	public:

		Character(const std::string& name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
		AMateria	*getMateriaFromInventory(int idx);

	private:
		AMateria *inv[4];
		std::string name;
};

#endif /* ******************************************************* CHARACTER_H */