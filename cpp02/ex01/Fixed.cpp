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
    : value(roundf((1 << 8) * n))
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
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}


/* ************************************************************************** */