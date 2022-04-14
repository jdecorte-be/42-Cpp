#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
   return abs((a.getX().getRawBits()*(b.getY().getRawBits()-c.getY().getRawBits()) + b.getX().getRawBits()*(c.getY().getRawBits()-a.getY().getRawBits())+ c.getX().getRawBits()*(a.getY().getRawBits()-b.getY().getRawBits()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    // * Area of A
    float A = area (a, b, c);
    if(A == 0) return false;

    // * Area of A1
    float A1 = area (point, b, c);
    if(A1 == 0) return false;
  
    // * Area of A2
    float A2 = area (a, point, c);
    if(A2 == 0) return false;

    // * Area of A3
    float A3 = area (a, b, point);
    if(A3 == 0) return false;

    return (A == A1 + A2 + A3);
}