#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>

class DiamondTrap
{
    public:
        DiamondTrap();
        DiamondTrap(const std::string name);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &dia);
        DiamondTrap(const DiamondTrap &dia);

};

#endif