#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class FixedPoint
{
    public:
        FixedPoint();
        FixedPoint(const FixedPoint& other);
        FixedPoint& operator=(const FixedPoint& rhs);
        ~FixedPoint();
        int getRawBits() const;
        void setRawBits (int const raw);
    private:
        int _value;
        static const int fractionalBits = 8;
};

#endif