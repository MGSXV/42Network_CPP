/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:03:40 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/29 18:53:34 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractions = 8;

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

Fixed	&Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->setRawBit(fixed.getRawBit());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
