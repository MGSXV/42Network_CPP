/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:23:39 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/18 18:45:02 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

typedef std::string	str_t;

class Form
{
	private:
		const str_t			name;
		bool				isSigned;
		const unsigned int	minSignGrade;
		const unsigned int	minExecGrade;
	public:
		// Constructors and destructors
		Form(void);
		~Form(void);
		Form(const Form & other);
		// Assignment operator overload
		Form & operator=(const Form & other);
		// Insertion operator overload
		std::ostream & operator<<(std::ostream &out);
        // Accessors
		// Getters and setters
		const str_t&		getName(void) const;
		bool				isSigned(void) const;
		const unsigned int	getMinSignGrade(void) const;
		const unsigned int	getMinExecGrade(void) const;
		// Member functions
		void	beSigned(Bureaucrat& b);
};

#endif