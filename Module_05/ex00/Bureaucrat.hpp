/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:03:58 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 03:49:00 by sel-kham         ###   ########.fr       */
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
		Bureaucrat(const str_t &name);
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
		// Member functions
		void incrementGrade(void);
		void decrementGrade(void);
	private:
		const str_t		name;
		unsigned int	grade;
};

#endif