#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class	Fixed{
	public:
		Fixed();
		Fixed(const Fixed &fpnv);
		Fixed& operator=(const Fixed& f);
		~Fixed();
		int	getRawBits(void)const;
		void	setRawBits(int const raw);

	private:
	int	fpnv;
	static const int fb = 8;
};
#endif
