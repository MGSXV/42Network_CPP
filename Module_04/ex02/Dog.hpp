/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:19:23 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/17 03:03:18 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

typedef std::string	str_t;

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		// Constructors and destructors
		Dog (void);
		~Dog(void);
		Dog(const Dog &other);
		// Assignment operator
		Dog &operator=(const Dog &other);
		//  Getters and setters
		void	setBrain(Brain *&new_brain);
		Brain*	getBrain(void) const;
        // Member functions
		void	makeSound(void) const;
};

#endif