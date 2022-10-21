/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/21 21:28:19 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : name("chahadat lwafat"), minSignGrade(145), minExecGrade(5137)
{
	this->_isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(str_t target) : name("chahadat lwafat"), minSignGrade(145), minExecGrade(5137)
{
	this->_isSigned = false;
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::ShrubberyCreationForm(const str_t& name, str_t target) : name(name), minSignGrade(145), minExecGrade(137)
{
	this->_isSigned = false;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : name(other.name), minSignGrade(other.minSignGrade), minExecGrade(other.minExecGrade)
{
	this->_isSigned = other._isSigned;
	this->target = other.target;
}

// Assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	return (*(new ShrubberyCreationForm(other)));
}

// Member functions
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	treeFile;
	if (this-_isSigned)
	{
		try
		{
			if (executor.getGrade() > this->getMinSignGrade())
			{
				throw Form::GradeTooLowException();
			}
			treeFile.open(this->target + "_signature", std::ios_base::app);
			if (!treeFile)
			{
				std::cout << "\033[0;31mError opening destination file!\033[0;37m" << std::endl;
				exit(1);
			}
			treeFile << "                                  # #### ####" << std::endl;
			treeFile << "                                ### \\/#|### |/####" << std::endl;
			treeFile << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
			treeFile << "                             ###  \\/###|/ \\/ # ###" << std::endl;
			treeFile << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
			treeFile << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
			treeFile << "                           __#_--###`  |{,###---###-~" << std::endl;
			treeFile << "                                     \\ }{" << std::endl;
			treeFile << "                                      }}{" << std::endl;
			treeFile << "                                      }}{" << std::endl;
			treeFile << "                                      {{}" << std::endl;
			treeFile << "                                , -=-~{ .-^- _" << std::endl;
			treeFile << "                                      `}" << std::endl;
			treeFile << "                                      `}" << std::endl;
			treeFile.close();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cerr << "\033[0;31mThis form is not signed!\033[0;37m" << std::endl;
}
