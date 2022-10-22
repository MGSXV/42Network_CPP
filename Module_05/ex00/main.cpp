/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 02:26:34 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat b1;
	Bureaucrat b2("b2", 150);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	b1.incrementGrade();
	b2.incrementGrade();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	b2.decrementGrade();
	std::cout << b2 << std::endl;
}
