#include "Fixed.hpp"

FixedPoint::FixedPoint() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = (num << fractionalBits);
}

FixedPoint::FixedPoint(const float num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = int(roundf(num * (1 << fractionalBits)));
}

FixedPoint::~FixedPoint()
{
    std::cout << "Destructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint& other) : _value(other._value) 
{
    std::cout << "Copy constructor called" << std::endl;
}

FixedPoint& FixedPoint::operator=(const FixedPoint& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	 this->_value = rhs._value;
    return *this;
}

float FixedPoint::toFloat(void) const
{
    return float(this->_value) / (1 << fractionalBits);
}

int FixedPoint::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

int FixedPoint::toInt(void) const
{
	return this->_value >> fractionalBits;
}

void FixedPoint::setRawBits (int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

std::ostream& operator<<(std::ostream& o, const FixedPoint& fixed)
{
	o << fixed.toFloat();
	return o;
}