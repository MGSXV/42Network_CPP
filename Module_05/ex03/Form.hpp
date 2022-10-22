/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:28:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 09:05:02 by sel-kham         ###   ########.fr       */
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
	protected:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minGradeToSign;
		const unsigned int	minGradeToExec;
	public:
		// Constructors and destructors
		Form(void);
		virtual ~Form(void);
		Form(const str_t name, bool _isSigned, const unsigned int minGradeToSign, const unsigned int minGradeToExec);
		Form(const Form &form);
		// Getters and setters
		str_t			getName(void) const;
		bool			isSigned(void) const;
		unsigned int	getMinGradeToSign(void) const;
		unsigned int	getMinGradeToExec(void) const;
		void			setIsSigned(bool isSigned);
		// Member functions
		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat &b) const = 0;
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