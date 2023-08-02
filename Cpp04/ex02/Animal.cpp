#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
    return;
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