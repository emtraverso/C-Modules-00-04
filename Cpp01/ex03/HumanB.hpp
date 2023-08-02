#ifndef _HUMAN_B_HPP
#define _HUMAN_B_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack() const;
    private:
        std::string name;
        Weapon* _weapon;
};

#endif