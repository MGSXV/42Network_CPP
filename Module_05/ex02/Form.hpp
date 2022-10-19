/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:23:39 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 22:00:45 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

typedef std::string	str_t;

class Form
{
	private:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minSignGrade;
		const unsigned int	minExecGrade;
	public:
		// Constructors and destructors
		Form(void);
		~Form(void);
		Form(const str_t& name, bool _isSigned, const unsigned int minSignGrade, const unsigned int minExecGrade);
		Form(const Form & other);
		// Assignment operator overload
		Form & operator=(const Form & other);
        // Accessors
		// Getters and setters
		const str_t&		getName(void) const;
		bool				isSigned(void) const;
		const unsigned int&	getMinSignGrade(void) const;
		const unsigned int&	getMinExecGrade(void) const;
		// Member functions
		void	beSigned(Bureaucrat& b);
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};
// Insertion operator overload
std::ostream & operator<<(std::ostream &out, Form& form);

#endif