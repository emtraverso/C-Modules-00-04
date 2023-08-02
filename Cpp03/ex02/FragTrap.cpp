#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap constructor created" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << name << " constructor created" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor created" << std::endl;
}

void FragTrap::display(std::ostream& stream) const
{
    stream << "Frag-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void		FragTrap::highFivesGuys()
{
	std::cout << "High Five man !" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, FragTrap const& ft)
{
    ft.display(stream);
    return (stream);
}