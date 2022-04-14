#include "Point.hpp"
#include <iostream>

int main( void )
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);

	Point point(100, 100);
	Point point2(10, 30);
	Point point3(20, 0);
	Point point4(0, 0);
	Point point5(10, 15);

	std::cout << bsp(a, b, c, point) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
	std::cout << bsp(a, b, c, point4) << std::endl;
	std::cout << bsp(a, b, c, point5) << std::endl;
}
