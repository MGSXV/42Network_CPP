/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 04:02:56 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat b1;
	Bureaucrat b2("b2", 150);
	Form	f1("chahadat sokna", false, 100, 100);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	b1.incrementGrade();
	b2.incrementGrade();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	std::cout << b1 << std::endl;
	b1.signForm(f1);
	b2.setGrade(2);
	b2.signForm(f1);
	b2.signForm(f1);
	b2.signForm(f1);
	std::cout << b2 << std::endl;
}
