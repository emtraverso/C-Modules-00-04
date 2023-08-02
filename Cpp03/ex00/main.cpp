#include "ClapTrap.hpp"

int main()
{
  	ClapTrap	a("Leao");
  	ClapTrap	b("CDK");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	b.takeDamage(20);
	std::cout << b << std::endl;
	b.beRepaired(3);
	std::cout << b << std::endl;
	b.attack("Lukaku");
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.attack("Lukaku");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("Lukaku");
}