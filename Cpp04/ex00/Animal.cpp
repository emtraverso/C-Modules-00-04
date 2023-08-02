#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
    return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal &	Animal::operator=( Animal const & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void Animal::makeSound() const
{
    std::cout << "Make a sound" << std::endl;
}

const std::string& Animal::getType() const
{
    return (this->type);
}

std::ostream& operator<<(std::ostream& stream, Animal& an)
{
    stream << an.getType();
    return stream;
}