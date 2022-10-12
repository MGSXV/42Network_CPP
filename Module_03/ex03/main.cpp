/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:14:58 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 02:19:33 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dt1;
	DiamondTrap	dt2("Hey");

	std::cout << "getName		: "		<< dt2.getName() << std::endl;
	std::cout << "getAttackDamage	: " << dt2.getAttackDamage() << std::endl;
	std::cout << "getEnergyPoints	: " << dt2.getEnergyPoints() << std::endl;
	std::cout << "getHitpoints	: "		<< dt2.getHitpoints() << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	dt2.whoAmI();
	return (0);
}
