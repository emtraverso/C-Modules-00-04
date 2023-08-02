#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name", 100, 50 , 30), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap constructor" << std::endl;
    _name = "";
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name", 100, 50 , 30), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap " << name << " constructor" << std::endl;
    _name = name;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "Assignement operator doesn't work, get lost" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		DiamondTrap::display(std::ostream& stream) const
{
	stream << "Diamond-TP " << _name << " / " << ClapTrap::_name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void		DiamondTrap::whoAmI() const
{
	std::cout << *this << std::endl;
}

void 		DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

std::ostream&	operator<<(std::ostream& stream, DiamondTrap const& di)
{
	di.display(stream);
	return (stream);
}