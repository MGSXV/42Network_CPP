/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:40 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/21 06:06:16 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : name("chahadat lwafat"), minSignGrade(25), minExecGrade(5)
{
	this->_isSigned = false;
}

PresidentialPardonForm::PresidentialPardonForm(str_t target) : name("chahadat lwafat"), minSignGrade(25), minExecGrade(5)
{
	this->_isSigned = false;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm::PresidentialPardonForm(const str_t& name, str_t target) : name(name), minSignGrade(25), minExecGrade(5)
{
	this->_isSigned = false;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
	this->target = other.target;
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
