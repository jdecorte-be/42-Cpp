#include "Fixed.hpp"

const int Fixed::bit = 8;

// * constuctor
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    value = n << bit;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf((1 << 8) * n);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    value = fixed.getRawBits();
}

// * ope
Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

// * Getters and setters
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
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

