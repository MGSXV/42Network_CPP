/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:28 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 02:21:30 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma ocnce
#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include "Weapon.hpp"
# include <iostream>

typedef std::string	str_t;

class	HumanB
{
	public:
		// Constructors and destructors
		HumanB();
		~HumanB();
		// Getters and setters
		str_t	getName(void) const;
		Weapon	getWeaponType(void) const;
		void	setWeaponType(const Weapon type);
		void	setName(const str_t name);
		// class methods
		void	attack(void);
	private:
		str_t	name;
		Weapon	weaponType;
};

#endif