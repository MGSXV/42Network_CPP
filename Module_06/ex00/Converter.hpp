/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:04:52 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/24 20:13:56 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONVERTER_H__
# define __CONVERTER_H__

# include <iostream>
# include <string>
# include <limits>
# include <iomanip>

typedef std::string	str_t;

class	Converter
{
	private:
		str_t	input;
		// Member functions
		bool	isChar(void) const;
		bool	isPseudo(void) const;
		bool	isInt(void) const;
		bool	isFloat(void) const;
		bool	isDouble(void) const;
		bool	isDouble(str_t input) const;
		bool	isValid(void) const;
		void	printChar(void) const;
		void	printInt(void) const;
		void	printFloat(void) const;
		void	printDouble(void) const;
	public:
		// Constructors and destructors
		Converter(void);
        ~Converter(void);
		Converter(const Converter& other);
		Converter(const str_t input);
		// Assignment operator overload
		Converter& operator=(const Converter& other);
		// Getters and setters
		str_t	getInput(void) const;
		void	setInput(const str_t input);
		// Member functions
		void    printResults(void) const;
		
		// Exeptions handling
		class InvalidInputExeption : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &obj, const Converter& cnv);

#endif