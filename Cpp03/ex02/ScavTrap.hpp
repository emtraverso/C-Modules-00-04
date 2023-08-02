#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &src );
        ~ScavTrap();

        ScavTrap	&operator=( const ScavTrap &other );

        void display(std::ostream& stream) const ;
        void attack(const std::string& target);
        void guardGate();
};

std::ostream& operator<<(std::ostream& stream, ScavTrap const& sc);
#endif
