/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:03 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 16:59:05 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(str_t name, Weapon &weapon) : weaponType(weapon)
{
	this->setName(name);
	// this->setWeapon(weapon);
}

HumanA::~HumanA(void) {}

str_t	HumanA::getName(void) const
{
	return (this->name);
}

Weapon	HumanA::getWeapon(void) const
{
	return (this->weaponType);
}

void	HumanA::setName(str_t name)
{
	this->name = name;
}

void	HumanA::setWeapon(Weapon &type)
{
	this->weaponType = type;
}

void	HumanA::attack(void)
{
	std::cout <<  this->getName() << "  attacks with their " << this->getWeapon().getType() << std::endl;
}

