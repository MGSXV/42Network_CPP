/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:57:36 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 19:39:15 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

typedef std::string	str_t;

class	Zombie
{
	public:
		// Constructors and destructors
		~Zombie(void);
		// Getters and setters
		str_t	getName(void) const;
		void	setName(str_t name);
		// Class methods
		void	announce(void);
	private:
		str_t	Name;
};

Zombie	*zombieHorde(int n, str_t name);

#endif