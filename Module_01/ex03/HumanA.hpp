/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:10 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 16:57:58 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include "Weapon.hpp"
# include <iostream>

typedef std::string	str_t;

class HumanA
{
	public:
		// Constructors and destructors
		HumanA();
		HumanA(str_t name, Weapon &weapon);
		~HumanA();
		// Getters and setters
		str_t	getName(void) const;
		Weapon	getWeapon(void) const;
		void	setWeapon(Weapon &type);
		void	setName(str_t name);
		// class methods
		void	attack(void);
	private:
		str_t	name;
		Weapon	&weaponType;
};

#endif