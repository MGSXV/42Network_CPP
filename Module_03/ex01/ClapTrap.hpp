/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:19:50 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 21:11:58 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

typedef std::string	str_t;

class ClapTrap
{
	private:
		str_t	Name;
		int		HitPoints;
		int		EnergyPoints;
		int		AttackDamage;
	public:
		// Constructors and destructors
		ClapTrap(void);
		ClapTrap(const str_t &name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		// Assignment operator overload
		ClapTrap&	operator=(const ClapTrap &other);
		// Getters and setters
		str_t	getName(void) const;
		int		getHitpoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
		void	setName(str_t name);
		void	setHitpoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);
		// Member functions
		void	attack(const str_t &target);
		void	takeDamage(unsigned int damage);
		void	beRepaired(unsigned int amount);
};

#endif