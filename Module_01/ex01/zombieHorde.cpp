/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:24:31 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 19:43:37 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, str_t name)
{
	Zombie	*zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		zombies[i].setName(name + "_" + std::to_string(i + 1));
		zombies[i].announce();
	}
	return (zombies);
}
