/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:05:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 01:47:25 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b1("b1", 1);
	Bureaucrat b2;
	Form f1;
	Form f2("f2", false, 3, 3);

	b1.incrementGrade();
	std::cout << "1 ----------------------------------------------------" << std::endl;
	b2.setGrade(1);
	std::cout << "2 ----------------------------------------------------" << std::endl;
	b2.incrementGrade();
	std::cout << "3 ----------------------------------------------------" << std::endl;
	++b2;
	std::cout << "4 ----------------------------------------------------" << std::endl;
	b2.incrementGrade();
	std::cout << "5 ----------------------------------------------------" << std::endl;
	b2.setGrade(69);
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << b2.getName() << " : " << b2.getGrade() << std::endl;
	std::cout << f1 << std::endl;
	b2.signForm(f1);
	std::cout << f1 << std::endl;
	b2.setGrade(1);	
	std::cout << b2.getName() << " : " << b2.getGrade() << std::endl;
	b2.signForm(f1);
	std::cout << f1 << std::endl;

}