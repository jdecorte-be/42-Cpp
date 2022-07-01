#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void attack(const std::string& target);
        void takeDamage(int amount);
        void beRepaired(unsigned int amount);

	protected:
		std::string name;
        int health;
        int energy;
        int damage;

};

#endif /* ******************************************************** CLAPTRAP_H */