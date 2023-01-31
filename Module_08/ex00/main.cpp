/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 19:04:37 by sel-kham          #+#    #+#             */
/*   Updated: 2023/01/31 17:58:25 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main(void)
{
	int	i;
	/*
	*	Vector (Dynamic array)
	*	Vector is a sequence container which is a group of template classes used to store data elements sequentially in memory
	*/
	std::vector<int>	vc;
	std::deque<int>		dq;
	std::list<int>		lst;

	i = -1;
	while (++i < 100)
		vc.push_back(i);
	try
	{
		std::cout << easyfind(vc, 1000) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/*
	* Array is a sequence container as well
	*/
	i = -1;
	while (++i < 100)
		dq.push_back(i);
	try
	{
		std::cout << easyfind(dq, 99) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/*
	* Forward_lis is a sequence container as well
	*/
	i = -1;
	while (++i < 100)
		lst.push_front(i);
	try
	{
		std::cout << easyfind(lst, 99) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}