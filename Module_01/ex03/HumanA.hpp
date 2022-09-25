/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:10 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 00:40:47 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma ocnce
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
		HumanA(const str_t name, const Weapon weapon);
		~HumanA();
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