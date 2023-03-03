/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:50:17 by sel-kham          #+#    #+#             */
/*   Updated: 2023/03/03 21:00:50 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	tox(std::string &s)
{
	int	i;

	i = -1;
	while (s[++i])
		s[i] = 'x';
}

void	plusten(int &n)
{
	n = n + 10;
}

template <typename tt>
void	printcomp(tt const &t)
{
	// t = (tt) t + 1;
	std::cout << t << std::endl;
}

int	main(void)
{
	std::string strs[] = {"test 1", "test 2", "test 3"};
	iter(strs, 3, tox);
	for (int i = 0; i < 3; i++)
		std::cout << strs[i] << std::endl;
	std::cout << "----------------------------" << std::endl;
	int nums[] = {1, 2, 3};
	iter(nums, 3, plusten);
	for (int i = 0; i < 3; i++)
		std::cout << nums[i] << std::endl;
	std::cout << "----------------------------" << std::endl;
	iter(nums, 3, printcomp);
	for (int i = 0; i < 3; i++)
		std::cout << nums[i] << std::endl;
	std::cout << "----------------------------" << std::endl;
	char cs[] = {'a', 'b', 'c'};
	iter(cs, 3, printcomp);
	for (int i = 0; i < 3; i++)
		std::cout << cs[i] << std::endl;
	return (0);
}