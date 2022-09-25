/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:21:45 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 14:40:07 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructors and destructors
Weapon::Weapon(const str_t type)
{
	this->setType(type);
}

Weapon::Weapon(void) {}

str_t	Weapon::getType(void) const
{
	return (this->type);
}

// Assignment operator
Weapon& Weapon::operator=(const Weapon& weapon)
{
	if (this != &weapon)
		this->type = weapon.getType();
	return (*this);
}

void	Weapon::setType(const str_t type)
{
	this->type = type;
}
