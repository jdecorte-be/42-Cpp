#include "Fixed.hpp"

const int Fixed::bit = 8;

// * constuctor
Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const int n)
{
    value = n << bit;
}

Fixed::Fixed(const float n)
{
    value = roundf((1 << 8) * n);
}

Fixed::~Fixed()
{
    return;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}



// * ope
Fixed &Fixed::operator=(const Fixed &fixed)
{
    if(this == &fixed)
        return *this;
    value = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
    o << fixed.toFloat();
    return o;
}



bool Fixed::operator<(const Fixed &fixed) const
{
    return value < fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return value > fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return value <= fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return value >= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return value == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return value != fixed.getRawBits();
}




Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed ret(this->toFloat() + fixed.toFloat());
    return ret;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed ret(this->toFloat() - fixed.toFloat());
    return ret;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed ret(this->toFloat() * fixed.toFloat());
    return ret;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed ret(this->toFloat() / fixed.toFloat());
    return ret;
}




Fixed &Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->value--;
    return *this;
}

float Fixed::operator--(int n)
{
    float res = this->toFloat();
    this->value--;
    return res;
}

float Fixed::operator++(int n)
{
    float res = this->toFloat();
    this->value++;
    return res;
}



Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return b;
    return a;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a.getRawBits() < b.getRawBits())
        return b;
    return a;
}






// * Getters and setters
int Fixed::getRawBits() const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

// * Member functions
float Fixed::toFloat() const
{
    int fixed = value;
    return ((float)fixed / (1 << 8));
}

float Fixed::toInt() const
{
    return getRawBits() >> 8;
}

