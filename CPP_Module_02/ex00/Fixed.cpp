#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{ 
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed = other.getRawBits();
	return *this;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl; 
}

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}