/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 06:13:48 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 09:13:34 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) { }

Intern::~Intern(void) { }

Intern::Intern(Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(Intern& other)
{
	return (other);
}

// Member functions
Form*	Intern::makeForm(const str_t &formName, const str_t &target)
{
	Form*			(Intern::*formTypes[4]) (const str_t &target) = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	str_t			formNames[] = {"ShrubberyCreation Form", "RobotomyRequest Form", "PresidentialPardon Form"};
	unsigned long	i;
	i = -1;
	while (++i < sizeof(formNames) / sizeof(formNames[0]))
		if (strToLower(formNames[i]) == strToLower(formName))
			break ;
	if (i < 3)
		return ((this->*formTypes[i]) (target));
	return (nullptr);
}

// Helper functions
Form*	Intern::makeShrubberyCreation(const str_t &target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeRobotomyRequest(const str_t &target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePresidentialPardon(const str_t &target)
{
	return (new PresidentialPardonForm(target));
}

str_t	Intern::strToLower(str_t str)
{
	unsigned long	i;

	i = -1;
	while (++i < str.length())
		str[i] = tolower(str[i]);
	return (str);
}
