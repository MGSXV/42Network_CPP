/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:12:25 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/10 20:01:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st1("test1");
	ClapTrap	ct1("TP1");
	ScavTrap    st2;
	ScavTrap    st3(st2);

	st2 = st3;
	ct1.beRepaired(35);
	std::cout << "Name : " << st1.getName() << std::endl;
	std::cout << "Hit Points : " << st1.getHitpoints() << std::endl;
	std::cout << "Energy Points : " << st1.getEnergyPoints() << std::endl;
	std::cout << "Damage :  " << st1.getAttackDamage() << std::endl;
	st1.attack("TP1");
	ct1.takeDamage(st1.getAttackDamage());
	return (0);
}
