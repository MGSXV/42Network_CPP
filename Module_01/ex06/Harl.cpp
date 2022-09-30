/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:33:12 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/30 20:45:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "ACH HADA!! Emmmm..." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ] " << std::endl;
	std::cout << "Wah wah wah! Wa bghina bacon a sa7bi!!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WRNING ] " << std::endl;
	std::cout << "7adari!!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ] " << std::endl;
	std::cout << "Ya *awdtihaaaa!!!!" << std::endl;
}

void	Harl::complain(str_t level)
{
	int		i;
	str_t	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*comp[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
			if (!level.compare(complaints[i]))
				break ;
	switch (i)
	{
	case 0:
		(this->*comp[i]) ();
		i++;
	case 1:
		(this->*comp[i]) ();
		i++;
	case 2:
		(this->*comp[i]) ();
		i++;
	case 3:
		(this->*comp[i]) ();
		i++;
		break ;
	default:
		std::cout << "Ma fhamt walou!!!!" << std::endl;
		break;
	}
}
