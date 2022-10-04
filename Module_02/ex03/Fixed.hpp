/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:33:20 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/04 21:38:20 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		// Constructors and destructors
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		// Operators overload
		// // Comparison operators
		bool	operator==(const Fixed &left) const;
		bool	operator!=(const Fixed &left) const;
		bool	operator>(const Fixed &left) const;
		bool	operator<(const Fixed &left) const;
		bool	operator>=(const Fixed &left) const;
		bool	operator<=(const Fixed &left) const;
		// // Arcmitic operators
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator+(Fixed &other);
		Fixed	operator-(Fixed &other);
		Fixed	operator/(Fixed &other);
		Fixed	operator*(const Fixed &other);
		// // Copy assignment operator
		Fixed	&operator=(const Fixed &other);
		// Getters and setters
		void	setRawBit(int const raw);
		int		getRawBit(void) const;
		// Member functions
		float			toFloat(void) const;
		int				toInt(void) const;
		static Fixed	&min(Fixed &p1, Fixed &p2);
		static const Fixed	&min(const Fixed &p1, const Fixed &p2);
		static Fixed	&max(Fixed &p1, Fixed &p2);
		static const Fixed	&max(const Fixed &p1, const Fixed &p2);
	private:
		int					raw;
		static const int	fractions;
};

std::ostream	&operator<<(std::ostream &obj, const Fixed& fixed);


#endif