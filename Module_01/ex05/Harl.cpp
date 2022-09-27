/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 02:48:48 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/27 22:49:34 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "ACH HADA!! Emmmm..." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Wah wah wah! Wa bghina bacon a sa7bi!!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "7adari!!" << std::endl;
}

void	Harl::error(void)
{
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
	if (i < 4)
		(this->*comp[i]) ();
	else
		std::cout << "Ma fhamt walou!!" << std::endl;
}
	
