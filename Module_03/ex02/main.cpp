/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:12:25 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 21:48:48 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("TP1");
	str_t		name;
	
	name = "FallGuy";
	FragTrap	ft1(name);
	FragTrap	ft2(ft1);

	// ft2 = ft1;
	ct1.beRepaired(35);
	std::cout << &ft1 << std::endl;
	std::cout << &ft2 << std::endl;
	std::cout << "Name : " << ft1.getName() << std::endl;
	std::cout << "Hit Points : " << ft1.getHitpoints() << std::endl;
	std::cout << "Energy Points : " << ft1.getEnergyPoints() << std::endl;
	std::cout << "Damage :  " << ft1.getAttackDamage() << std::endl;
	ft1.highFivesGuys();
	return (0);
}
