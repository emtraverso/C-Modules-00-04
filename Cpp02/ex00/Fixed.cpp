#include "Fixed.hpp"

FixedPoint::FixedPoint() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint& other) : _value(other._value) 
{
    std::cout << "Copy constructor called" << std::endl;
}


FixedPoint& FixedPoint::operator=(const FixedPoint& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs._value;
    return *this;
}

FixedPoint::~FixedPoint()
{
    std::cout << "Destructor called" << std::endl;
}


int FixedPoint::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void FixedPoint::setRawBits (int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}