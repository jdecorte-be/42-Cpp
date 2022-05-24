#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point()
	: x(0), y(0)
{
}

Point::Point(const float x, const float y)
	: x(x), y(y)
{
}

Point::Point( const Point & src )
	: x(src.x), y(src.y)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
	{
		(Fixed)x = (Fixed)rhs.x;
		(Fixed)y = (Fixed)rhs.y;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}


/* ************************************************************************** */