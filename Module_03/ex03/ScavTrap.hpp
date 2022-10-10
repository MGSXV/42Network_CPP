/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:12:46 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 21:13:37 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include "ClapTrap.hpp"

typedef std::string	str_t;

class ScavTrap : public ClapTrap
{
	private:
	public:
		// Constructors and destructors
		ScavTrap();
        ~ScavTrap();
		ScavTrap(const str_t &name);
		ScavTrap(const ScavTrap& trap);
		// Assignment operator overload
		ScavTrap	&operator=(const ScavTrap &other);
		// member functions
		void	attack(const str_t &target);
		void	guardGate(void);
};

#endif