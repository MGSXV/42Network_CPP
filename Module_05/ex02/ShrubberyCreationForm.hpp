/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:24:57 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/22 05:23:55 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SHRUBBERYCREATIONFORM_H__
# define __SHRUBBERYCREATIONFORM_H__

# include <iostream>
# include <exception>
# include "Form.hpp"

typedef std::string	str_t;

class	ShrubberyCreationForm : public Form
{
	private:
		str_t	target;
	public:
		// Constructors and destructors
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(str_t target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		// Assignment operator overload
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
		// Getters and setters
		void	setTarget(const str_t target);
		str_t    getTarget(void) const;
};

#endif