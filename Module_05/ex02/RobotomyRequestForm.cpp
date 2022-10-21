/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:51 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/21 06:08:17 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : name("chahadat lwafat"), minSignGrade(72), minExecGrade(45)
{
	this->_isSigned = false;
}

RobotomyRequestForm::RobotomyRequestForm(str_t target) : name("chahadat lwafat"), minSignGrade(72), minExecGrade(45)
{
	this->_isSigned = false;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm::RobotomyRequestForm(const str_t& name, str_t target) : name(name), minSignGrade(72), minExecGrade(45)
{
	this->_isSigned = false;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
	this->target = other.target;
}

// Assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	return (*(new RobotomyRequestForm(other)));
}

// Member functions
void	RobotomyRequestForm::beSigned(Bureaucrat& b)
{
	try
	{
		if (b.getGrade() > this->getMinSignGrade())
		{
			throw Form::GradeTooLowException();
		}
		this->_isSigned = true;
		std::cout << "ZZzzzzzZZzzzzzZZZzzzzzZZzZZZZzzzZZzzZZzzz" << std::endl;
		if (rand() % 2)
		{
			this->_isSigned = true;
			std::cout << this->target << " has been robotomized successfully." << std::endl;
		}
		else
			std::cout << "Robotomy failed." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}
