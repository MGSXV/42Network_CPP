/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:09:53 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/11 22:52:18 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

typedef std::string	str_t;

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		str_t	Name;
    public:
		// Constructors and destructors
		DiamondTrap();
        ~DiamondTrap();
		DiamondTrap(const str_t name);
		DiamondTrap(const DiamondTrap& other);
		// Assignment operator overload
		DiamondTrap&    operator=(const DiamondTrap& other);
		// Member functions
		void	attack(const str_t &target);
		void	whoAmI(void);
};

#endif