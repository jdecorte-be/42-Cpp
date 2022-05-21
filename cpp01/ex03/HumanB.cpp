#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
    std::cout << "HumanB Constructor Called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor Called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}