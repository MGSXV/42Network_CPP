/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:03:28 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/29 18:35:09 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a.getRawBit() << std::endl;
	std::cout << b.getRawBit() << std::endl;
	std::cout << c.getRawBit() << std::endl;
	return (0);
}
