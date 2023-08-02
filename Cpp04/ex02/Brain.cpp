#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain const & src )
{
    std::cout << "Copy constructor for Brain called" << std::endl;
    *this = src;
    return;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=( Brain const & rhs )
{
    std::cout << "Assignement operator for Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

