/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:19:43 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/26 15:23:00 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void	fatal_error(const char *err_msg)
{
	std::cout << RED_COLOR << err_msg << DEFAULT_COLOR << std::endl;
	exit(EXIT_FAILURE);
}

int	main(int c, char **v)
{
	if (c != 2)
		fatal_error(INPUT_ERR);
	try
	{
		BitcoinExchange btc = BitcoinExchange(v[1]);
		btc.analyze();
	}
	catch (const std::runtime_error e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
