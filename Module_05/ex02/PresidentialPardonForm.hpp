/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:59:06 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/21 21:41:43 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include <iostream>
# include <exception>
# include "Form.hpp"

typedef std::string	str_t;

class PresidentialPardonForm : public Form
{
	private:
		const str_t			name;
		bool				_isSigned;
		const unsigned int	minSignGrade;
		const unsigned int	minExecGrade;
		str_t				target;
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(str_t target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const str_t& name, str_t target);
		PresidentialPardonForm(const PresidentialPardonForm & other);
		// Assignment operator overload
		PresidentialPardonForm& operator=(const PresidentialPardonForm & other);
		// Member functions
		void	execute(Bureaucrat const & executor) const;
};

#endif