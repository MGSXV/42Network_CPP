/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:22:37 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 23:46:17 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1;
	Zombie	*zombies;

	std::cout << sizeof(Zombie) << std::endl;
	zombie1.setName("Creeper");
	zombie1.announce();
	zombies = zombieHorde(5, "Creeper");
	delete [] zombies;
	return (0);
}
