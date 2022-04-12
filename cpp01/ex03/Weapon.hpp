#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string &getType();
        void setType(const std::string &type);
    private:
        std::string type;

};

#endif