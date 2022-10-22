/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:28:09 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 06:00:41 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>
# include "Form.hpp"

typedef std::string	str_t;

class Form;
class	Bureaucrat
{
	private:
		const str_t		name;
		unsigned int	grade;
		// Operators overload
		Bureaucrat	&operator--(void);
		Bureaucrat	&operator++(void);
	public:
		// Constructors and destructors
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const str_t& name, unsigned int grade);
		Bureaucrat(const Bureaucrat& obj);
		// Operators overload
		Bureaucrat&	operator=(const Bureaucrat& obj);
		// Getters and setters
		str_t			getName(void) const;
		unsigned short	getGrade(void) const;
		void			setGrade(const unsigned int grade);
		// Member functions
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form& form);
		void	executeForm(Form const & form);
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif