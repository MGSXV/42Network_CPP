/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:54:40 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:55:17 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PRESIDENTIALPARDONFORM_H__
# define __PRESIDENTIALPARDONFORM_H__

# include <iostream>
# include <exception>
# include <fstream>
# include "Form.hpp"

typedef std::string	str_t;

class	PresidentialPardonForm : public Form
{
	private:
		str_t	target;
	public:
		// Constructors and destructors
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(str_t target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		// Assignment operator overload
		PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
		// Getters and setters
		void	setTarget(const str_t target);
		str_t    getTarget(void) const;
		// Member functions
		void	execute(Bureaucrat &b) const;
};

#endif