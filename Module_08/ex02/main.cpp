/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:30:30 by sel-kham          #+#    #+#             */
/*   Updated: 2023/03/08 04:50:39 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"

int	main(void)
{
	// std::stack<int> st;
	// const MutantStack<int> mt1;
	// MutantStack<int>::const_iterator itc = mt1.begin();
	MutantStack<int> mt;
	mt.push(21);
	mt.push(22);
	mt.push(24);
	mt.push(25);
	// std::cout << "------------------------------" << std::endl;
	// std::cout << "itc :\t" << *itc << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Size :\t" << mt.size() << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Begin :\t" << *mt.begin() << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "End :\t" << *(--mt.end()) << std::endl;
	std::cout << "------------------------------" << std::endl;
	MutantStack<int> mtc1 = MutantStack<int>(mt);
	while (!mtc1.empty())
	{
		std::cout << mtc1.top() << std::endl;
		mtc1.pop();
	}
	std::cout << "------------------------------" << std::endl;
	MutantStack<int> mtc2 = mt;
	while (!mtc2.empty())
	{
		std::cout << mtc2.top() << std::endl;
		mtc2.pop();
	}
	std::cout << "------------------------------" << std::endl;
	while (!mt.empty())
	{
		std::cout << mt.top() << std::endl;
		mt.pop();
	}
	std::cout << "------------------------------" << std::endl;
	while (!mt.empty())
	{
		std::cout << mt.top() << std::endl;
		mt.pop();
	}
}
