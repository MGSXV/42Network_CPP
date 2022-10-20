/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:40 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/20 08:55:21 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : name("chahadat lwafat"), minSignGrade(25), minExecGrade(5)
{
	this->_isSigned = false;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm::PresidentialPardonForm(const str_t& name) : name(name), minSignGrade(25), minExecGrade(5)
{
	this->_isSigned = false;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
}

PresidentialPardonForm::PresidentialPardonForm(const str_t& name, bool _isSigned, const unsigned int minSignGrade, const unsigned int minExecGrade) : name(name), minSignGrade(minSignGrade), minExecGrade(minExecGrade)
{
	this->_isSigned = _isSigned;
}

// Assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
	return (*(new PresidentialPardonForm(other)));
}

void	PresidentialPardonForm::beSigned(Bureaucrat& b)
{
	this->_isSigned = true;
	std::cout << b.getName() <<  "jah 3afw malaki." << std::endl;
}
