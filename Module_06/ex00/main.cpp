/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:11:21 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/24 01:47:16 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << std::endl << "\t\033[0;31mERROR\033[0;37m: \033[0;33mInvalid number of arguments!\033[0;31m" << std::endl;
		std::cerr << "\t\033[1;30m(nice try btw!)" << std::endl << std::endl;
		return (1);
	}
	try
	{
		Converter cnv(argv[1]);
		cnv.printResults();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
