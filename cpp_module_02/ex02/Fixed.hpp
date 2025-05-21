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
		bool	operator==(const Fixed& equal)const;
		bool	operator!=(const Fixed& not_equal)const;
		bool	operator<(const Fixed& less)const;
		bool	operator>(const Fixed& great)const;
		bool	operator<=(const Fixed& l_e)const;
		bool	operator>=(const Fixed& g_e)const;
		Fixed operator+(const Fixed& i)const;
		Fixed operator-(const Fixed& i)const;
		Fixed operator*(const Fixed& i)const;
		Fixed operator/(const Fixed& i)const;
		Fixed& operator++(void);
		Fixed operator++(int i);
		Fixed& operator--(void);
		Fixed operator--(int i);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
	private:
	int	fpnv;
	static const int fb = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
