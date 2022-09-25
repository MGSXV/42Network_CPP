/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:22:21 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 14:34:49 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructors and destructors
HumanB::HumanB(str_t name)
{
	this->setName(name);
}

HumanB::HumanB(void){}

HumanB::~HumanB(void) {}

str_t	HumanB::getName(void) const
{
	return (this->name);
}

Weapon	HumanB::getWeapon(void) const
{
	return (this->weaponType);
}

void	HumanB::setName(str_t name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon type)
{
	this->weaponType = type;
}

void	HumanB::attack(void)
{
	std::cout <<  this->getName() << "  attacks with their " << this->getWeapon().getType() << std::endl;
}
