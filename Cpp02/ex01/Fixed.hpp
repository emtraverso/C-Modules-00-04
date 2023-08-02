#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class FixedPoint
{
    public:
        FixedPoint();
        FixedPoint(const int num);
        FixedPoint(const float num);
        FixedPoint(const FixedPoint& fixed);
        ~FixedPoint();

        FixedPoint& operator=(const FixedPoint& rhs);
        int getRawBits() const;
        void setRawBits (int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int _value;
        static const int fractionalBits = 8;
};
std::ostream& operator<<(std::ostream& o, const FixedPoint& fixed);
#endif