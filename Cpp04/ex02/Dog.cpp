#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain;
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& src)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignement operator" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return (*this);
}

Animal	&Dog::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bau" << std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->brain);
}