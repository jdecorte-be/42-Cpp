#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap
	: public ScavTrap, public FragTrap
{

	public:

		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void whoAmI();
		void	attack( const std::string &target );

	private:
		std::string name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */