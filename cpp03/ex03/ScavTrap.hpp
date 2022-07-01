#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"

class ScavTrap
	: virtual public ClapTrap
{

	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void attack(const std::string& target);

		void guardGate(void);

	private:
};

#endif /* ******************************************************** SCAVTRAP_H */