#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::Weapon(std::string type)
    : type(type)
{
    std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor Called" << std::endl;
}

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}