/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:02:09 by sel-kham          #+#    #+#             */
/*   Updated: 2023/02/01 19:41:22 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h> 

int	main(void)
{
	unsigned int	MAX_SIZE = 100000;
	Span span = Span(6);
	Span spn2 = Span(MAX_SIZE);
	Span spn3 = Span(6);

	try
	{
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		span.addNumber(-1);
		std::cout << "Shortest:	" << span.shortestSpan() << std::endl;
		std::cout << "Longest:	" << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------------------" << std::endl;
	try
	{
		srand(time(NULL));
		int randNum = rand() % 2;
		for (size_t i = 0; i < MAX_SIZE; i++)
		{
			if (randNum)
				spn2.addNumber(i * 2);
			else
				spn2.addNumber(i);
		}
		std::cout << "Shortest:	" << spn2.shortestSpan() << std::endl;
		std::cout << "Longest:	" << spn2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------------------" << std::endl;
	try
	{
		std::vector<int> vec;
		int	i = -1;
		while (++i < 6)
			vec.push_back(i);
		spn3.addRange(vec.begin(), vec.end());
		spn3.printSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}