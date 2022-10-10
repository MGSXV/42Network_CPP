/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:05:41 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 21:41:24 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setName("Anonymous");
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Hello World! this is the default constructor for FragTrap object!" << std::endl;
}

FragTrap::FragTrap(const str_t &name)
{
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Hello World! this is the default constructor for FragTrap object!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Bye from FragTrap :(" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& fragTrap)
{
    this->setHitpoints(fragTrap.getHitpoints());
	this->setEnergyPoints(fragTrap.getEnergyPoints());
	this->setAttackDamage(fragTrap.getAttackDamage());
	this->setName(fragTrap.getName());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hello World! Wanna high five? (　＾＾)人(＾＾　)" << std::endl;
}
