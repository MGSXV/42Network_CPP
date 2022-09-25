/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:21:45 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 02:31:39 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

str_t	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(const str_t type)
{
	this->type = type;
}
