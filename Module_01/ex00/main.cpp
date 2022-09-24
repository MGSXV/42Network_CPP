/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:57:09 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 19:19:26 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1;
	Zombie	*zombie2;

	zombie1.setName("Creeper");
	zombie2 = newZombie("7ach7ouch");
	zombie1.announce();
	zombie2->announce();
	randomChump("Captain Chris Redfield ");
	delete(zombie2);
	return (0);
}
