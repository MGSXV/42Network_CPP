/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:59:02 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/20 08:42:12 by sel-kham         ###   ########.fr       */
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
    public:
        // Constructors and destructors
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const str_t& name);
		RobotomyRequestForm(const RobotomyRequestForm & other);
        // Assignment operator overload
        RobotomyRequestForm& operator=(const RobotomyRequestForm & other);
        // Member functions
        void	beSigned(Bureaucrat& b);
};

#endif