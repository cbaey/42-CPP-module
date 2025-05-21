#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fpnv = 0;
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
		this->fpnv = f.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called\n";
	return (fpnv);
}

void	Fixed::setRawBits(int const raw)
{
	fpnv = raw;
}
