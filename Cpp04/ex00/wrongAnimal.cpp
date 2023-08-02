#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
	std::cout << "WrongAnimal constructor" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound()  const
{
	std::cout << "Make a sound" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &wr)
{
	ostream << wr.getType();;
	return ostream;
}