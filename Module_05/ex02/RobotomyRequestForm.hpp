/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:59:02 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/21 06:05:52 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>
# include <exception>
# include <cstdlib>
# include "Form.hpp"

typedef std::string	str_t;

class RobotomyRequestForm : public Form
{
	private:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minSignGrade;
		const unsigned int	minExecGrade;
		str_t				target;
    public:
        // Constructors and destructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(str_t target);
		RobotomyRequestForm(const str_t& name, str_t target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const str_t& name);
		RobotomyRequestForm(const RobotomyRequestForm & other);
        // Assignment operator overload
        RobotomyRequestForm& operator=(const RobotomyRequestForm & other);
        // Member functions
        void	beSigned(Bureaucrat& b);
};

#endif