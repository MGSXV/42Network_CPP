/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:05:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 17:21:03 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b1("b1", 1);
	Bureaucrat b2;

	// b2 = b1;
	b1.incrementGrade();
	b2.setGrade(1);
	b2.incrementGrade();
	++b2;
	std::cout << b1.getName() << " : " << b1.getGrade() << std::endl;
	b2.incrementGrade();
	std::cout << b2.getName() << " : " << b2.getGrade() << std::endl;

}