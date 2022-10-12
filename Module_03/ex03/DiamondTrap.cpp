/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:09:57 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/11 22:57:03 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->setName("Anonymous");
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Hello World! This is the diamond default without the probelm :D" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Bye from the diamond :(" << std::endl;
}

DiamondTrap::DiamondTrap(const str_t name)
{
	this->setName(name + ClapTrap::getName());
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Hello World! This is the diamond named :D" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap)
{
	*this = trap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap)
{
	this->setName(trap.getName());
	this->setHitpoints(trap.getHitpoints());
	this->setEnergyPoints(trap.getEnergyPoints());
	this->setAttackDamage(trap.getAttackDamage());
    return (*this);
}

void	DiamondTrap::attack(const str_t &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
	std::cout << "Myyyyyyy name: " << this->getName() << std::endl;
}
