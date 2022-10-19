/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 09:39:30 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : name("Chahadat sokna"), minSignGrade(145), minExecGrade(137)
{
	this->_isSigned = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::ShrubberyCreationForm(const str_t& name) : name(name), minSignGrade(145), minExecGrade(137)
{
	this->_isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
}

// Assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	return (*(new ShrubberyCreationForm(other)));
}

// Member functions
void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
	std::ofstream	treeFile;
	if (b.getGrade() > this->getMinSignGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->_isSigned = true;
	treeFile.open("signature", std::ios_base::app);
	if (!treeFile)
	{
		std::cout << "\033[0;31mError opening destination file!\033[0;37m" << std::endl;
		exit(1);
	}
	treeFile << "                                  # #### ####" << std::endl;
	treeFile << "                                ### \/#|### |/####" << std::endl;
	treeFile << "                               ##\/#/ \||/##/_/##/_#" << std::endl;
	treeFile << "                             ###  \/###|/ \/ # ###" << std::endl;
	treeFile << "                           ##_\_#\_\## | #/###_/_####" << std::endl;
	treeFile << "                          ## #### # \ #| /  #### ##/##" << std::endl;
	treeFile << "                           __#_--###`  |{,###---###-~" << std::endl;
	treeFile << "                                     \ }{" << std::endl;
	treeFile << "                                      }}{" << std::endl;
	treeFile << "                                      }}{" << std::endl;
	treeFile << "                                      {{}" << std::endl;
	treeFile << "                                , -=-~{ .-^- _" << std::endl;
	treeFile << "                                      `}" << std::endl;
	treeFile << "                                      `}" << std::endl;
	treeFile.close();
}
