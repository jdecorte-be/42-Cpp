#include "Fixed.hpp"

const int Fixed::bit = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
	: value(0)
{
    // std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int n)
    : value(n << bit)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
    : value(roundf((1 << 8) * n))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
    // std::cout << "Copy constructor called" << std::endl;
    value = src.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
    // std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		value = rhs.getRawBits();
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
    (void)n;
    float res = this->toFloat();
    this->value--;
    return res;
}

float Fixed::operator++(int n)
{
    (void)n;
    float res = this->toFloat();
    this->value++;
    return res;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat() const
{
    int fixed = value;
    return ((float)fixed / (1 << 8));
}

float Fixed::toInt() const
{
    return getRawBits() >> 8;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
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

/* ************************************************************************** */

