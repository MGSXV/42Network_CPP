/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:28:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 03:53:07 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

typedef std::string	str_t;

class Bureaucrat;

class	Form
{
	private:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minGradeToSign;
		const unsigned int	minGradeToExec;
	public:
		// Constructors and destructors
		Form(void);
		~Form(void);
		Form(const str_t name, bool _isSigned, const unsigned int minGradeToSign, const unsigned int minGradeToExec);
		Form(const Form &form);
		// Assignment operator overload
		Form	&operator=(const Form &form);
		// Getters and setters
		str_t			getName(void) const;
		bool			isSigned(void) const;
		unsigned int	getMinGradeToSign(void) const;
		unsigned int	getMinGradeToExec(void) const;
		void			setIsSigned(bool isSigned);
		// Member functions
		void			beSigned(Bureaucrat &b);
		// Exeptions handling
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

std::ostream&	operator<<(std::ostream& out, const Form &form);

#endif