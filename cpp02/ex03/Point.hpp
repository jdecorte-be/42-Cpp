#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>

# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(const float x, const float y);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );

		Fixed getX() const;
		Fixed getY() const;

	private:
        const Fixed x;
        const Fixed y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* *********************************************************** POINT_H */