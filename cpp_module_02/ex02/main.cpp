#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed const	b( Fixed(5.05f) * Fixed(2));
	Fixed	c(Fixed(123.21f) + Fixed(2));
	Fixed const	d(Fixed(123.21f) / Fixed(2));
	Fixed	e(Fixed(34.123f) - Fixed(34.2131231f));
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << "a is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a-- << std::endl;
	std::cout << "a is " << --a << std::endl;
	std::cout << "a is " << --a << std::endl;
	std::cout << Fixed::min(b,d) << std::endl;
	std::cout << Fixed::min(b,e) << std::endl;
	std::cout << Fixed::min(c,e) << std::endl;
	std::cout << Fixed::max(b,d) << std::endl;
	std::cout << Fixed::max(b,e) << std::endl;
	std::cout << Fixed::max(c,e) << std::endl;
}
