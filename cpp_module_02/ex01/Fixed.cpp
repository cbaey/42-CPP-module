#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fpnv = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	fpnv = value << fb;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	fpnv = roundf(value * powf(2, fb));
}

Fixed::Fixed(const Fixed &fpnv)
{
	std::cout << "Copy constructor called\n";
	*this = fpnv;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &f)
	{
		this->fpnv = f.fpnv;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float	Fixed::toFloat(void)const
{
	return(fpnv / powf(2, fb));
}

int	Fixed::toInt(void)const
{
	return(fpnv >> fb);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	return (os << obj.toFloat());
}
