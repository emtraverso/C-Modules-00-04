#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 50)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 50)
{
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void ScavTrap::display(std::ostream& stream) const
{
    stream << "Scav-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

std::ostream& operator<<(std::ostream& stream, ScavTrap const& sc)
{
    sc.display(stream);
    return (stream);
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints && _hitPoints) {
        std::cout << "ScavTrap " << _name << " attacks " << target 
            << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
    else   
        std::cout << "Not enough energy points" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}