/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:33:38 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/05 05:19:13 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors and destructors
Point::Point(void)
{
	this->setX(0);
	this->setY(0);
}

Point::Point(const Fixed x, const Fixed y)
{
	this->setX(x);
	this->setY(y);
}

Point::Point(const Point &point)
{
	*this = point;
}

Point::~Point(void) {};

// Copy assignment operator
Point	&Point::operator=(const Point &other)
{
	this->setX(other.getX());
	this->setY(other.getY());
	return (*this);
}

// compare operator overload
bool	Point::operator==(const Point &other) const
{
	return (this->getX() == other.getX() && this->getY() == other.getY());
}
// Getters and setters
void	Point::setX(const Fixed &x)
{
	this->x = x;
}

void	Point::setY(const Fixed &y)
{
	this->y = y;
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
