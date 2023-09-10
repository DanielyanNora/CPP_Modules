#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					fixed;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int inp);
	Fixed(const float inp);
	Fixed(const Fixed &other);
	~Fixed();
	Fixed&	operator=(const Fixed& other);
	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif