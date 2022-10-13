/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:08:28 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 17:23:51 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include <iostream>
# include "WrongAnimal.hpp"

typedef std::string	str_t;

class WrongCat : public WrongAnimal
{
	public:
		// Constructors and destructors
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat& other);
		// Assignment operator overload
		WrongCat& operator=(const WrongCat& other);
        // Public member functions
		void	makeSound(void) const;
};

#endif