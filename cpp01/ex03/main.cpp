#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("Weapon1");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("Weapon2");
    bob.attack();

    Weapon club2 = Weapon("Weapon3");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club.setType("Weapon4");
    jim.attack();
    return 0;
}