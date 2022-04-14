#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        float value;
        static const int bit;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);

        ~Fixed();
        Fixed(const Fixed&);
        Fixed &operator=(const Fixed&);
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat() const;
        float toInt() const;

};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif