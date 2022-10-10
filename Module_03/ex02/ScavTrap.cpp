/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:12:39 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 21:13:49 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

typedef std::string	str_t;

ScavTrap::ScavTrap(void)
{
	std::cout << "This is the ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(str_t const &name)
{
	this->setName(name);
	std::cout << "Hello World! this is the initialize constructor for ScavTrap :)" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "This is the ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
}

// Assignment operator overload
ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->setName(other.getName());
	this->setAttackDamage(other.getAttackDamage());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setHitpoints(other.getHitpoints());
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const str_t &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitpoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);	
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " \
				<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
}
