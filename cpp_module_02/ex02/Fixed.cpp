#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	fpnv = 0;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called\n";
	fpnv = value << fb;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called\n";
	fpnv = roundf(value * powf(2, fb));
}

Fixed::Fixed(const Fixed &fpnv)
{
	//std::cout << "Copy constructor called\n";
	*this = fpnv;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	//std::cout << "Copy assignment operator called\n";
	if (this != &f)
	{
		this->fpnv = f.fpnv;
	}
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

float	Fixed::toFloat(void)const
{
	return(fpnv / powf(2, fb));
}

int	Fixed::toInt(void)const
{
	return(fpnv >> fb);
}

bool	Fixed::operator==(const Fixed& equal)const
{
	return (this->fpnv == equal.fpnv);
}

bool	Fixed::operator!=(const Fixed& not_equal)const
{
	return !(*this == not_equal);
}

bool	Fixed::operator<(const Fixed& less)const
{
	return (this->fpnv < less.fpnv);
}

bool	Fixed::operator<=(const Fixed& l_e)const
{
	return (*this < l_e || *this == l_e);
}

bool	Fixed::operator>(const Fixed& great)const
{
	return (this->fpnv > great.fpnv);
}

bool	Fixed::operator>=(const Fixed& g_e)const
{
	return (*this > g_e || *this == g_e);
}

Fixed Fixed::operator+(const Fixed& i)const
{
	return (toFloat() + i.toFloat());
}

Fixed Fixed::operator-(const Fixed& i)const
{
	return (toFloat() - i.toFloat());
}

Fixed Fixed::operator*(const Fixed& i)const
{
	return (toFloat() * i.toFloat());
}

Fixed Fixed::operator/(const Fixed& i)const
{
	return (toFloat() / i.toFloat());
}

Fixed& Fixed::operator++(void)
{
	fpnv++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}

Fixed& Fixed::operator--(void)
{
	fpnv--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	std::cout << "const func :";
	if (f1.fpnv < f2.fpnv)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	std::cout << "non const func :";
	if (f1.fpnv < f2.fpnv)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	std::cout << "const func :";
	if (f1.fpnv > f2.fpnv)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	std::cout << "non const func :";
	if (f1.fpnv > f2.fpnv)
		return (f1);
	else
		return (f2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	return (os << obj.toFloat());
}
