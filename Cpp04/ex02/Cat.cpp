#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat( Cat const & src )
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
    return;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

Cat        &Cat::operator=( const Cat & rhs )
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

Animal	&Cat::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miao" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (this->brain);
}