/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 09:09:48 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
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
	Intern stagir;
	// Form* form = stagir.makeForm("ShrubberyCreation Form", "zitoun");
	// Form* form = stagir.makeForm("RobotomyRequest Form", "rokhsa dlbni");
	// Form* form = stagir.makeForm("PresidentialPardon Form", "3afw malaki");
	Form* form = stagir.makeForm("not real", "imaginary");
	if (!form)
		return (1);
	b1.executeForm(*form);
	b1.signForm(*form);
	b1.executeForm(*form);
	delete form;
}
