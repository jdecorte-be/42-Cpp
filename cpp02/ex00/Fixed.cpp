#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed&)
{

}

Fixed &Fixed::operator=(const Fixed&)
{

}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl << value << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}



