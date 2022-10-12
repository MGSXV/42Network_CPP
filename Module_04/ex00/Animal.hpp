/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:15:47 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 05:26:39 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

typedef std::string	str_t;

class Animal
{
	protected:
		str_t	type;
	public:
		// Constructors and destructors
		Animal();
        ~Animal();
		Animal(const Animal& animal);
		// Assignment operator overload
		Animal& operator=(const Animal& animal);
		// Getters and setters
		str_t	getType() const;
		void	setType(const str_t& t);
};

#endif