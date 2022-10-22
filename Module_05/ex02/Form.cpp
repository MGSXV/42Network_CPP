/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:28:21 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 03:06:30 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors and destructors
Form::Form(void) : name("Chahadat sokna"), minGradeToSign(150), minGradeToExec(150)
{
	this->_isSigned = false;
	std::cout << "Sir jib chahadat l7ayat lwl" << std::endl;
}

Form::~Form(void) { }

Form::Form(const str_t name, bool _isSigned, const unsigned int minGradeToSign, const unsigned int minGradeToExec) : name(name), minGradeToSign(minGradeToSign), minGradeToExec(minGradeToExec)
{
	this->_isSigned = _isSigned;
}

Form::Form(const Form &form) : name(form.name), minGradeToSign(form.minGradeToSign), minGradeToExec(form.minGradeToExec)
{
	this->_isSigned = form._isSigned;
}

// Assignment operator overload
Form	&Form::operator=(const Form &form)
{
	Form *newF = new Form(form);
	return (*newF); 
}

std::ostream&	operator<<(std::ostream& out, const Form &form)
{
	out << "Form name :" << form.getName() << std::endl;
	out << "getMinGradeToSign :" << form.getMinGradeToSign() << std::endl;
	out << "getMinGradeToExec :" << form.getMinGradeToExec() << std::endl;
	out << "Is the form signed :" << form.isSigned();
    return (out);
}

// Getters and setters
str_t	Form::getName(void) const
{
	return (this->name);
}

bool	Form::isSigned(void) const
{
	return (this->_isSigned);
}

unsigned int	Form::getMinGradeToSign(void) const
{
	return (this->minGradeToSign);
}

unsigned int	Form::getMinGradeToExec(void) const
{
	return (this->minGradeToExec);
}

void    Form::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;	
}

void    Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getMinGradeToSign())
		this->setIsSigned(true);
	else
		throw Form::GradeTooLowException();
		
}

// Exeptions handling
const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("\033[0;31mForm can't be signed because bureaucrat's grade is too low!\033[0;37m");
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("\033[0;31mForm can't be signed because bureaucrat's grade is too high!\033[0;37m");
}
