#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon)
{
    std::cout << "HumanA Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor Called" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}