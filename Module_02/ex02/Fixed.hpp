/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:43:16 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/03 18:43:32 by sel-kham         ###   ########.fr       */
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
		// Copy assignment operator overload
		Fixed			&operator=(const Fixed &other);
		// Getters and setters
		void	setRawBit(int const raw);
		int		getRawBit(void) const;
		// Member functions
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					raw;
		static const int	fractions;
};

std::ostream	&operator<<(std::ostream &obj, const Fixed& fixed);

#endif