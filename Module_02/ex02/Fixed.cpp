/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:42:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/04 20:43:20 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractions = 8;

// Constructors and destructors
Fixed::Fixed(void)
{
	this->setRawBit(0);
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int value)
{
	this->setRawBit(value << Fixed::fractions);
}

Fixed::Fixed(const float value)
{
	this->setRawBit(roundf(value * (1 << Fixed::fractions)));
}

Fixed::~Fixed(void)
{
}

// Operators overload
Fixed	&Fixed::operator=(const Fixed& fixed)
{
	this->setRawBit(fixed.raw);
	return (*this);
}

std::ostream	&operator<<(std::ostream &out,const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
// Comparison operators
bool	Fixed::operator==(const Fixed &left) const
{
	return (this->toFloat() == left.toFloat());
}

bool	Fixed::operator!=(const Fixed &left) const
{
	return (this->toFloat() != left.toFloat());
}

bool	Fixed::operator>(const Fixed &left) const
{
	return (this->toFloat() > left.toFloat());
}

bool	Fixed::operator<(const Fixed &left) const
{
	return (this->toFloat() < left.toFloat());
}

bool	Fixed::operator>=(const Fixed &left) const
{
	return (this->toFloat() >= left.toFloat());
}

bool	Fixed::operator<=(const Fixed &left) const
{
	return (this->toFloat() <= left.toFloat());
}
// Arcmitic operators
Fixed	Fixed::operator++(void)
{
	++this->raw;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	--this->raw;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	
	this->raw++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	
	this->raw--;
	return (tmp);
}

Fixed	Fixed::operator+(Fixed &other)
{
	Fixed	tmp(this->toFloat() + other.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed &other)
{
	Fixed	tmp(this->toFloat() - other.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	tmp(this->toFloat() * other.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed &other)
{
	Fixed	tmp(this->toFloat() / other.toFloat());
	return (tmp);
}

int	Fixed::getRawBit(void) const
{
	return (this->raw);
}

void	Fixed::setRawBit(const int value)
{
	this->raw = value;
}

int	Fixed::toInt(void) const
{
	return (this->raw / (1 << Fixed::fractions));
}

float	Fixed::toFloat(void) const
{
	return ((float) this->raw / (1 << Fixed::fractions));
}

Fixed	&Fixed::min(Fixed &p1, Fixed &p2)
{
	return ((p1 < p2) ? p1 : p2);
}

const Fixed	&Fixed::min(const Fixed &p1, const Fixed &p2)
{
	const Fixed	&tmp = (p1 < p2) ? p1 : p2;
	return (tmp);
}

Fixed	&Fixed::max(Fixed &p1, Fixed &p2)
{
	return ((p1 > p2) ? p1 : p2);
}

const Fixed	&Fixed::max(const Fixed &p1, const Fixed &p2)
{
	const Fixed	&tmp = (p1 > p2) ? p1 : p2;
	return (tmp);
}
