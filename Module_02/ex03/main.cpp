/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:33:04 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/05 23:58:01 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int	main(void)
{
	bool	res;
	Point	p1(Fixed(1.f), Fixed(1.f));
	Point	p2(Fixed(2.f), Fixed(2.f));
	Point	p3(Fixed(3.f), Fixed(1.f));
	Point	p(Fixed(2.f), Fixed(1.5f));

	res = bsp(p1, p2, p3, p);
	if (res)
		std::cout << "\033[0;32mThe point is inside the triangle!\033[0;37m" << std::endl;
	else
		std::cout << "\033[0;31mThe point is NOT inside the triangle!\033[0;37m" << std::endl;
	return (0);
}
