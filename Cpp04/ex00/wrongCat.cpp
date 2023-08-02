#include "wrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "wrongCat constructor" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "wrongCat destructor" << std::endl;
	return;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miao"
		<< std::endl;
}