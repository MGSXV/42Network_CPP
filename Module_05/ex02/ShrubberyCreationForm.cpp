/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 09:23:01 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : name("Chahadat sokna"), minSignGrade(145), minExecGrade(137)
{
	this->_isSigned = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::ShrubberyCreationForm(const str_t& name) : name(name), minSignGrade(145), minExecGrade(137)
{
	this->_isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
}

// Assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	return (*(new ShrubberyCreationForm(other)));
}

// Member functions
void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getMinSignGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->_isSigned = true;
}
