#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _energyPoints;
        unsigned int _hitPoints;
        unsigned int _attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void display(std::ostream& stream) const;
};

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);


#endif