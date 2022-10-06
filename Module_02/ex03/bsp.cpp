/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:34:00 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/06 16:40:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	triangleArea(const Point a, const Point b, const Point c)
{
	Fixed	area;

	area = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()));
	area = Fixed(0.5f) * area;
	area.abs();
	return (area);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	area;
	Fixed	abc;

	abc = triangleArea(a, b, c);
	area = triangleArea(a, point, b);
	area = area + triangleArea(c, point, b);
	area = area + triangleArea(a, point, c);
	std::cout << abc << std::endl;
	std::cout << area << std::endl;
	if (area == abc)
		return (true);
	return (false);
}
