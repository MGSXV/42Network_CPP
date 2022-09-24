/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:57:36 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 19:05:52 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

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

Zombie	*newZombie(str_t name);
void	randomChump( std::string name );

#endif