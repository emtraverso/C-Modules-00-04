#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits) {}

Fixed::Fixed(const float floatValue) : value(static_cast<int>(roundf(floatValue * (1 << fractionalBits)))) {}

Fixed::Fixed(const Fixed& other) : value(other.value) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(const int raw) {
    value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

bool Fixed::operator>(const Fixed& other) const {
    return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.value = value + other.value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.value = value - other.value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.value = (value * other.value) >> fractionalBits;
    return result;
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}


Fixed& Fixed::operator++() {
    value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old(*this);
    ++(*this);
    return old;
}

Fixed& Fixed::operator--() {
    value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed old(*this);
    --(*this);
    return old;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.value < b.value) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a.value < b.value) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.value > b.value) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a.value > b.value) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
