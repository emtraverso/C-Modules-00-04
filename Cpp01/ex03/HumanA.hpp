#ifndef _HUMAN_A_HPP
#define _HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack() const;
    private:
        std::string _name;
        Weapon _weapon;
};

#endif