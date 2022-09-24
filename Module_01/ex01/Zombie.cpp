/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:57:25 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 19:15:20 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructors and destructors
Zombie::~Zombie(void)
{
	std::cout << this->getName() << " is dead but no longer walking!" << std::endl;
}

// Getters and setters for the Zombie class
str_t	Zombie::getName(void) const
{
	return (this->Name);
}

void	Zombie::setName(str_t name)
{
	this->Name = name;
}

// Class methods
void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
