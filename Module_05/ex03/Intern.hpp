/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 06:13:45 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 09:00:01 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include <exception>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef std::string	str_t;

class	Intern
{
	private:
		// Helper functions
		Form*	makeShrubberyCreation(const str_t &target);
		Form*	makeRobotomyRequest(const str_t &target);
		Form*	makePresidentialPardon(const str_t &target);
		str_t	strToLower(str_t str);
	public:
		// Constructors and destructors
		Intern(void);
		~Intern(void);
		Intern(Intern& other);
		// Assignment operator overload
		Intern& operator=(Intern& other);
		// Member functions
		Form*	makeForm(const str_t &formName, const str_t &target);
};

#endif