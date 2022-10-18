/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:04:02 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 17:12:40 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Bureaucrat")
{
	this->setGrade(150);
	std::cout << "Sir 7ta lghada wrja3!" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Rana sadin db!" << std::endl;
}

Bureaucrat::Bureaucrat(const str_t &name, unsigned int grade) : name(name)
{
	this->setGrade(grade);
	std::cout << "Sir rah si "<< this->name << " ma kainch!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	this->setGrade(other.grade);
}

// Assignment operator overload
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	Bureaucrat	*newb = new Bureaucrat(other.name , other.grade);
	this->setGrade(other.grade);
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

// Getters and setters
const str_t	Bureaucrat::getName(void) const 
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::setGrade(unsigned int grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		this->setGrade(1);
		std::cerr << e.what() << '\n';
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		this->setGrade(150);
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->grade - 1);
}

void Bureaucrat::decrementGrade(void)
{
	this->setGrade(this->grade + 1);
}

// Exeption Handling
const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("\033[0;31mGrade is too low!\nGrade will be set to the lowest possible value!\033[0;37m");
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("\033[0;31mGrade is too high!\nGrade will be set to the highest possible value!\033[0;37m");
}