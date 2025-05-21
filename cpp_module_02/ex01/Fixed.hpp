#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class	Fixed{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fpnv);
		Fixed& operator=(const Fixed& f);
		~Fixed();
		float	toFloat(void)const;
		int	toInt(void)const;

	private:
	int	fpnv;
	static const int fb = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
