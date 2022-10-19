/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:58:57 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/19 09:26:14 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>
# include <exception>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

typedef std::string	str_t;

class ShrubberyCreationForm : public Form
{
	private:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minSignGrade;
		const unsigned int	minExecGrade;
    public:
		// Constructors and destructors
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const str_t& name);
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		// Assignment operator overload
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm & other);
		// Member functions
		void	beSigned(Bureaucrat& b);
};

#endif