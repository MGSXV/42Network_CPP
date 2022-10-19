/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:51 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 09:47:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : name("Chahadat sokna"), minSignGrade(72), minExecGrade(45)
{
	this->_isSigned = false;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm::RobotomyRequestForm(const str_t& name) : name(name), minSignGrade(72), minExecGrade(45)
{
	this->_isSigned = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
}

// Assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	return (*(new RobotomyRequestForm(other)));
}

// Member functions
void	RobotomyRequestForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getMinSignGrade())
	{
		throw Form::GradeTooLowException();
	}
	std::cout << "ZZzzzzzZZzzzzzZZZzzzzzZZzZZZZzzzZZzzZZzzz" << std::endl;
	if (rand() % 2)
	{
		this->_isSigned = true;
		std::cout << b.getName() << " has been robotomized successfully." << std::endl;
	}
	else
		std::cout << "Robotomy failed." << std::endl;
}
