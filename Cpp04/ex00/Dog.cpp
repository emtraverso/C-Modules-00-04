#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
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

void Dog::makeSound() const
{
    std::cout << "Bau" << std::endl;
}