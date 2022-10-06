/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:33:45 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/05 05:21:57 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		// Constructors and destructors
		Point();
		Point(const Point &other);
		Point(const Fixed x, const Fixed y);
		~Point();
		// Copy assignment operator
		Point	&operator=(const Point &other);
		// Comparison operator overload
		bool	operator==(const Point &other) const;
		// Getters and setters
		void	setX(const Fixed &x);
		void	setY(const Fixed &y);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif