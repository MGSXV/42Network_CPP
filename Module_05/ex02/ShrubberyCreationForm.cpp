/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:27:39 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:56:54 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", false, 145, 137)
{
	this->setTarget("default target");
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::ShrubberyCreationForm(str_t target) : Form("ShrubberyCreationForm", false, 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): Form(cpy.getName(), cpy.isSigned(), cpy.getMinGradeToSign(), cpy.getMinGradeToExec())
{
	this->setTarget(cpy.getTarget());
}

// Assignment operator overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	ShrubberyCreationForm*	newSCF = new ShrubberyCreationForm(cpy);
	return (*newSCF);
}

// Getters and setters
void	ShrubberyCreationForm::setTarget(const str_t target)
{
	this->target = target;
}

str_t    ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

// Member functions
void	ShrubberyCreationForm::execute(Bureaucrat &b) const
{
	std::ofstream os;

	if (b.getGrade() <= this->getMinGradeToSign())
	{
		if (this->_isSigned)
		{
			os.open(this->getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::app);
			if (os.is_open())
			{
				os << "\
                        ###\
                       #o###\
                     #####o###\
                    #o#\#|#/###\
                     ###\|/#o#\
                      # }|{  #\
                        }|{" << std::endl;
				
			}
			else
			{
				std::cerr << "Couldn't open file!" << std::endl;
				exit(1);
			}
		}
	}
	else
		throw Form::GradeTooLowException();
}
