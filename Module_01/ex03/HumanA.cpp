/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:03 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 02:37:32 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const str_t name, const Weapon weapon)
{
	this->setName(name);
	this->setWeaponType(weapon);
}

str_t	HumanA::getName(void) const
{
	return (this->name);
}

Weapon	HumanA::getWeaponType(void) const
{
	return (this->weaponType);
}

void	HumanA::setName(const str_t name)
{
	this->name = name;
}

void	HumanA::setWeaponType(const Weapon type)
{
	this->weaponType = type;
}
