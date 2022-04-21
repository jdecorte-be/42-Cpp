#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap
    : public ClapTrap
{
    private:

    public:
        void attack(const std::string& target);
        void highFivesGuys(void);
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &clap);
        FragTrap(const FragTrap &clap);
};

#endif