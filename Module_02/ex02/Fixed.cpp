/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:42:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/03 18:43:42 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractions = 8;

// Constructors and destructors
Fixed::Fixed(void)
{
	this->setRawBit(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBit(value << Fixed::fractions);
}

Fixed::Fixed(const float value)
{
	this->setRawBit(roundf(value * (1 << Fixed::fractions)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Operators overload
Fixed	&Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->setRawBit(fixed.raw);
	return (*this);
}

std::ostream	&operator<<(std::ostream &out,const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBit(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

