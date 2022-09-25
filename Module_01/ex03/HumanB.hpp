/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:28 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 17:02:06 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include "Weapon.hpp"
# include <iostream>

typedef std::string	str_t;

class	HumanB
{
	public:
		// Constructors and destructors
		HumanB();
		HumanB(str_t name);
		~HumanB();
		// Getters and setters
		str_t	getName(void) const;
		Weapon	getWeapon(void) const;
		void	setWeapon(Weapon &type);
		void	setName(str_t name);
		// class methods
		void	attack(void);
	private:
		str_t	name;
		Weapon	*weaponType;
};

#endif