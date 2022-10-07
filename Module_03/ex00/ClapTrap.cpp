/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:19:45 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/08 00:54:22 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor and destructors
ClapTrap::ClapTrap(void)
{
	this->setName("Anonymous");
	this->setHitpoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "Hello World! this is the default constructor :)" << std::endl;
}

ClapTrap::ClapTrap(str_t &name)
{
	this->setName(name);
	this->setHitpoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "Hello World! this is the initialize constructor :)" << std::endl;
}

ClapTrap::ClapTrap(const str_t &name)
{
	this->setName(name);
	this->setHitpoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "Hello World! this is the initialize constructor :)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Bye! :'(" << std::endl;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->setName(other.getName());
	this->setAttackDamage(other.getAttackDamage());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setHitpoints(other.getHitpoints());
	return (*this);
}

// Getters and setters
str_t	ClapTrap::getName(void) const
{
	return (this->Name);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->AttackDamage);
}

int	ClapTrap::getHitpoints(void) const
{
	return (this->HitPoints);
}
int	ClapTrap::getEnergyPoints(void) const
{
    return (this->EnergyPoints);
}

void    ClapTrap::setName(str_t name)
{
	this->Name = name;
}

void    ClapTrap::setAttackDamage(int damage)
{
	if (damage < 0)
	{
		std::cout << "\033[0;31mDamage cannot be negative!\nDamage is now 0!\033[0;37m" << std::endl;
		this->setAttackDamage(0);
		return ;
	}
	this->AttackDamage = damage;
}

void    ClapTrap::setHitpoints(int hitpoints)
{
	if (hitpoints < 0)
	{
		std::cout << "\033[0;31mHit Points cannot be negative!\nHit points is now 0!\033[0;37m" << std::endl;
		this->setHitpoints(0);
		return ;
	}
	this->HitPoints = hitpoints;
}

void    ClapTrap::setEnergyPoints(int energypoints)
{
	if (energypoints < 0)
	{
		std::cout << "\033[0;31mEnergy Points cannot be negative!\nEnergy points is now 0!\033[0;37m" << std::endl;
		this->setEnergyPoints(0);
		return ;
	}
	this->EnergyPoints = energypoints;
}

// Member functions
void	ClapTrap::attack(const str_t &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitpoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);	
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " \
				<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0 && this->getHitpoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);	
		std::cout << "ClapTrap " << this->getName() << " repaired itself with " << amount << " hit points!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	if (this->getHitpoints() > 0)
	{
		if (this->getHitpoints() - damage > 0)
			this->setHitpoints(this->getHitpoints() - damage);
		else
			this->setHitpoints(0);
		std::cout << "ClapTrap " << this->getName() << " took damage of " << damage \
				<< " to stay with " << this->getHitpoints() << " hit points!" << std::endl;
	}
}