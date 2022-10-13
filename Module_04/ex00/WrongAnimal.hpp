/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:08:04 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 17:25:10 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

typedef std::string	str_t;

class WrongAnimal
{
	protected:
		str_t	type;
	public:
		// Constructors and destructors
		WrongAnimal(void);
        ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal& animal);
		// Assignment operator overload
		WrongAnimal& operator=(const WrongAnimal& animal);
		// Getters and setters
		str_t	getType(void) const;
		void	setType(const str_t& t);
		// Member functions
		void	makeSound(void) const;
};

#endif