/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:20:03 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 16:54:19 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("AK47");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("MAC11");
		bob.attack();
	}
	{
		Weapon club = Weapon("Glock19");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Revolver 357");
		jim.attack();
	}
	return (0);
}
