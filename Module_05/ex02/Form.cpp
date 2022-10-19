/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:23:30 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 03:24:02 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors and destructors
Form::Form(void) : name("Chahadat sokna"), minSignGrade(1), minExecGrade(1)
{
	this->_isSigned = false;
}

Form::~Form(void) { }

Form::Form(const str_t& name, bool _isSigned, const unsigned int minSignGrade, const unsigned int minExecGrade) : name(name), minSignGrade(minExecGrade), minExecGrade(minSignGrade)
{
	this->_isSigned = _isSigned;
}

Form::Form(const Form& other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other.isSigned();
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream &out, Form &form)
{
	std::cout << "Form's name			 : " << form.getName() << std::endl;
	std::cout << "Form's minimum sign grade	 : " << form.getMinSignGrade() << std::endl;
	std::cout << "Form's minimum execution grade	 : " << form.getMinExecGrade() << std::endl;
	std::cout << "Is the form signed?		 : " << form.isSigned() << std::endl;
	return (out);
}

// Getters and setters
const str_t& Form::getName(void) const
{
	return (name);
}

bool Form::isSigned(void) const
{
	return (this->_isSigned);
}

const unsigned int& Form::getMinSignGrade(void) const
{
	return (this->minSignGrade);
}

const unsigned int& Form::getMinExecGrade(void) const
{
	return (this->minExecGrade);
}

// Member functions
// void	Form::beSigned(Bureaucrat& b)
// {
// 	if (b.getGrade() > this->getMinSignGrade())
// 	{
// 		throw Form::GradeTooLowException();
// 	}
// 	this->_isSigned = true;
// }

// Exeptions Handling
const char*	Form::GradeTooHighException::what(void) const  throw()
{
	return ("\033[0;31mThe grade is too high!\033[0;37m");
}

const char*	Form::GradeTooLowException::what(void) const  throw()
{
	return ("\033[0;31mThe grade is too low!\033[0;37m");
}
