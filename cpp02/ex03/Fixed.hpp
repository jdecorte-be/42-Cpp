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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat() const;
        float toInt() const;

        Fixed &operator=(const Fixed&);
        bool operator<(const Fixed &fixed) const;
        bool operator>(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed &operator++();
        Fixed &operator--();
        float operator--(int n);
        float operator++(int n);

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);





};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif