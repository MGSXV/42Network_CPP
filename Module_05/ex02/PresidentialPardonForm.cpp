/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:54:44 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:57:24 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", false, 25, 5)
{
	this->setTarget("default target");
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm::PresidentialPardonForm(str_t target) : Form("PresidentialPardonForm", false, 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): Form(cpy.getName(), cpy.isSigned(), cpy.getMinGradeToSign(), cpy.getMinGradeToExec())
{
	this->setTarget(cpy.getTarget());
}

// Assignment operator overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	PresidentialPardonForm*	newSCF = new PresidentialPardonForm(cpy);
	return (*newSCF);
}

// Getters and setters
void	PresidentialPardonForm::setTarget(const str_t target)
{
	this->target = target;
}

str_t    PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

// Member functions
void	PresidentialPardonForm::execute(Bureaucrat &b) const
{
	if (b.getGrade() <= this->getMinGradeToSign())
	{
		if (this->_isSigned)
		{
			std::cout << "ZZzzZZzzzzZZZzzZZzzZZZZzzz" << std::endl;
			srand(time(nullptr));
			std::cout << this->getTarget() << " Jah 3afw malaki" << std::endl;
		}
	}
	else
		throw Form::GradeTooLowException();
}
