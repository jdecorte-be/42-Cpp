#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "MAIN SUBJECT\n";
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
   	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(-0.1f);
	std::cout << "\t COMPARAISON \t\n";
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
	std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;
	c = Fixed(0.5f);
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
    std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;
	c = a;
	std::cout << a << ">" << c << ":\t" << (a > c) << std::endl;
	std::cout << a << "<" << c << ":\t" << (a < c) << std::endl;
	std::cout << a << ">=" << c << ":\t" << (a >= c) << std::endl;
    std::cout << a << "<=" << c << ":\t" << (a <= c) << std::endl;
	std::cout << a << "==" << c << ":\t" << (a == c) << std::endl;
    std::cout << a << "!=" << c << ":\t" << (a != c) << std::endl;

	a = Fixed(12.5f);
	c = Fixed(17);
	std::cout << "\t OPE ARITHMETIC\t\n";
	std::cout << a << "+" << c << "=" << a + c << std::endl;
	std::cout << a << "-" << c << "=" << a - c << std::endl;;
	std::cout << a << "/" << c << "=" << a / c << std::endl;

	std::cout << "\t OPERATOR -- \t\n";
	a = Fixed(0);
	std::cout << "--a:\t" << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "a--:\t" << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "\t MIN & MAX\t\n";
	std::cout << "a=" << a << " c=" << c << " max: " << Fixed::max(a,c) << std::endl;
   	std::cout << "a=" << a << " b=" << b << " min: " << Fixed::min(a, b) << std::endl;
	std::cout << "a=" << a << " c=" << c << " min: " << Fixed::min(a,c) << std::endl; 	
	return 0;
}

// MAIN OF SUBJECT
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016

// 0.0078125>-0.101562:    1
// 0.0078125<-0.101562:    0
// 0.0078125>=-0.101562:   1
// 0.0078125<=-0.101562:   0
// 0.0078125==-0.101562:   0
// 0.0078125!=-0.101562:   1

// 0.0078125>0.5:  0
// 0.0078125<0.5:  1
// 0.0078125>=0.5: 0
// 0.0078125<=0.5: 1
// 0.0078125==0.5: 0
// 0.0078125!=0.5: 1

// 0.0078125>0.0078125:    0
// 0.0078125<0.0078125:    0
// 0.0078125>=0.0078125:   1
// 0.0078125<=0.0078125:   1
// 0.0078125==0.0078125:   1
// 0.0078125!=0.0078125:   0

// 12.5+17=Default constructor called
// 29.5
// Destructor called
// 12.5-17=Default constructor called
// -4.5
// 12.5/17=Float constructor called
// 0.734375

// --a:    -0.00390625
// -0.00390625
// a--:    -0.00390625
// -0.0078125

//          MIN & MAX
// a=-0.0078125 c=17 max: 17
// a=-0.0078125 b=10.1016 min: -0.0078125
// a=-0.0078125 c=17 min: -0.0078125
