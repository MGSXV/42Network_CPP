/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:12 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/23 00:40:32 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors and destructors
Bureaucrat::Bureaucrat(void) : name("Si benani")
{
	this->grade = 150;
	std::cout << "Sir 7ta lghda wrja3!" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Sir rah salina lkhdma db!" << std::endl;
}

Bureaucrat::Bureaucrat(const str_t& name, unsigned int grade) : name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name)
{
	this->grade = obj.grade;
}

// Operators overload
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	Bureaucrat*	newb = new Bureaucrat(obj);
	return (*newb);
}

Bureaucrat	&Bureaucrat::operator++(void)
{
	this->setGrade(--this->grade);
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--(void)
{
	this->setGrade(++this->grade);
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", Grade " << b.getGrade();
	return (out);
}

// Getters and setters
str_t	Bureaucrat::getName(void) const
{
	return (this->name);
}

unsigned short	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(const unsigned int grade)
{
	if (grade < 1)
	{
		this->grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		this->grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->grade = grade;
}

// Member functions
void Bureaucrat::incrementGrade(void)
{
	++(*this);
}

void Bureaucrat::decrementGrade(void)
{
	--(*this);
}

void	Bureaucrat::signForm(Form &form)
{
	if (!form.isSigned())
	{
		try
		{
			form.beSigned(*this);
			std::cout << "\033[0;32m" << this->getName() << " signed " << form.getName() << "\033[0;37m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\033[0;31m" << this->getName() << "  couldn’t sign " << form.getName() << "\033[0;37m" << std::endl;
		}
	}
	else
		std::cout << "\033[1;30m" << form.getName() << " is already signed " << "\033[0;37m" << std::endl;
}

void	Bureaucrat::executeForm(Form const &form)
{
	if (form.isSigned())
	{
		try
		{
			form.execute(*this);
			std::cout << "\033[0;32m" << this->getName() << " executed " << form.getName() << "\033[0;37m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\033[0;31m" << this->getName() << "  couldn’t execute " << form.getName() << "\033[0;37m" << std::endl;
		}
	}
	else
		std::cout << "\033[1;30m" << form.getName() << " is not signed!" << "\033[0;37m" << std::endl;
}

// Exeptions handling
const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("\033[0;31mBureaucrat's grade is too low!\033[0;37m");
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("\033[0;31mBureaucrat's grade is too high!\033[0;37m");
}
