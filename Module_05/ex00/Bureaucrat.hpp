/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:03:58 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 17:21:22 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>

typedef std::string	str_t;

class Bureaucrat
{
	public:
		// Constructors and destructors
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const str_t &name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		// Assignment operator overload
		Bureaucrat &operator=(const Bureaucrat &other);
		Bureaucrat	&operator++(void);
		Bureaucrat	&operator--(void);
		Bureaucrat	&operator++(int);
		Bureaucrat	&operator--(int);
		// Getters and setters
		const str_t		getName() const;
		unsigned int	getGrade() const;
		void	 		setGrade(unsigned int grade);
		// Member functions
		void incrementGrade(void);
		void decrementGrade(void);
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
	private:
		const str_t		name;
		unsigned int	grade;
};

#endif