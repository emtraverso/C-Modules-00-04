#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(const std::string name) : 
_name(name), _energyPoints(10), _hitPoints(10), _attackDamage(0)
{

}

ClapTrap::ClapTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name(name), _energyPoints(energyPoints), _hitPoints(hitPoints), _attackDamage(attackDamage)
{
	std::cout << "ClapTrap Param2 constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << "Clap-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}


std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
}

void ClapTrap::attack(const std::string& target)
{      
    if (_energyPoints && _hitPoints) {
        std::cout << "ClapTrap " << _name << " attacks " << target 
            << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
    else   
        std::cout << "Not enough energy points" << std::endl;
}
    
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " damages";
    std::cout << std::endl;
    if (amount <= _hitPoints)
        _hitPoints -= amount;
    else
    {
        _hitPoints = 0;
        std::cout << _name << " is dead." << std::endl;
    }
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (_energyPoints)
    {
        std::cout << "ClapTrap " << _name << " heal itself for " << amount << " points of damage" << std::endl;
        _energyPoints -= 1;
        _hitPoints += amount;
    }
    else
        std::cout << "Not enough energy points" << std::endl;

}










