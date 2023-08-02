#ifndef _WEAPON_HPP
#define _WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon(const std::string type);
        std::string getType() const;
        void setType(std::string type);
    private:
        std::string _type;

};

#endif