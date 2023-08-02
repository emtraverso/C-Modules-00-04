#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void) const;
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif