/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:46:08 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:56:45 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", false, 72, 45)
{
	this->setTarget("default target");
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm::RobotomyRequestForm(str_t target) : Form("RobotomyRequestForm", false, 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): Form(cpy.getName(), cpy.isSigned(), cpy.getMinGradeToSign(), cpy.getMinGradeToExec())
{
	this->setTarget(cpy.getTarget());
}

// Assignment operator overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	RobotomyRequestForm*	newSCF = new RobotomyRequestForm(cpy);
	return (*newSCF);
}

// Getters and setters
void	RobotomyRequestForm::setTarget(const str_t target)
{
	this->target = target;
}

str_t    RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

// Member functions
void	RobotomyRequestForm::execute(Bureaucrat &b) const
{
	if (b.getGrade() <= this->getMinGradeToSign())
	{
		if (this->_isSigned)
		{
			std::cout << "ZZzzZZzzzzZZZzzZZzzZZZZzzz" << std::endl;
			srand(time(nullptr));
			std::cout << this->getTarget() << (rand() % 2 ? " has been robotomized successfully" : " has faild") << std::endl;
		}
	}
	else
		throw Form::GradeTooLowException();
}
