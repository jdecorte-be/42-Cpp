#include "Fixed.hpp"

const int Fixed::bit = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
	: value(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int n)
    : value(n << bit)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
    : value(roundf((1 << bit) * n))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
    std::cout << "Copy constructor called" << std::endl;
    value = src.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
    o << fixed.toFloat();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat() const
{
    return ((float)value / (float)(1 << bit));
}

float Fixed::toInt() const
{
    return getRawBits() >> bit;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits() const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}


/* ************************************************************************** */