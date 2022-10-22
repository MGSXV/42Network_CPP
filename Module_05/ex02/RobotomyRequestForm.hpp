/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:44:37 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:45:30 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ROBOTOMYREQUESTFORM_H__
# define __ROBOTOMYREQUESTFORM_H__

# include <iostream>
# include <exception>
# include <fstream>
# include "Form.hpp"

typedef std::string	str_t;

class	RobotomyRequestForm : public Form
{
	private:
		str_t	target;
	public:
		// Constructors and destructors
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(str_t target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		// Assignment operator overload
		RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
		// Getters and setters
		void	setTarget(const str_t target);
		str_t    getTarget(void) const;
		// Member functions
		void	execute(Bureaucrat &b) const;
};

#endif