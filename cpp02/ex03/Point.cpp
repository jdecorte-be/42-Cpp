#include "Point.hpp"

Point::Point()
{
    x = 0; y = 0;
}

Point::~Point()
{

}

Point::Point(const float x, const float y)
{
    this->x = x; this->y = y;
}

Point::Point(const Point &point)
{
    *this = point;
}

Point &Point::operator=(const Point &point)
{
    if(this == &point)
        return *this;
    x = point.x;
    y = point.y;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
