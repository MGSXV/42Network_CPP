/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 06:11:05 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat b1("Si benani", 72);
	Bureaucrat b2("b2", 15);
	ShrubberyCreationForm scf;
	RobotomyRequestForm rrf;
	PresidentialPardonForm ppf;

	b1.executeForm(scf);
	b1.signForm(scf);
	b1.executeForm(scf);
	// b2.executeForm(scf);

}
