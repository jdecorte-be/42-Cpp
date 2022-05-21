#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		Zombie(std::string name);

		~Zombie();

		void setName(const std::string &name);
        void announce(void);

	private:
        std::string name;

};

Zombie *zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */