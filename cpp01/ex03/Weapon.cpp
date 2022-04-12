#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{

}

std::string &Weapon::getType()
{
    return type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}