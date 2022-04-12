#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
    private:
        float value;
        static const int bt;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed&);
        Fixed &operator=(const Fixed&);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif