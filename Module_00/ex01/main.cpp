/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:56:27 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/21 16:18:05 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	str_tolower(std::string *str)
{
	unsigned int	i;

	i = 0;
	while (i < (*str).length())
	{
		if ((*str)[i] >= 65 && (*str)[i] <= 90)
			(*str)[i] = (*str)[i] + 32;
		i++;
	}
}

int	command_handler(std::string cmd)
{
	int	choice;

	choice = 0;
	if (cmd == "add")
	{
		fflush(stdin);
		return (1);
	}
	else if (cmd == "search")
	{
		fflush(stdin);
		return (2);
	}
	else if (cmd == "exit")
	{
		fflush(stdin);
		return (0);
	}
	else
	{
		fflush(stdin);
		return (-1);
	}
}

int	main(void)
{
	int			choice;
	std::string	cmd;

	choice = 0;
	do
	{
		std::cout << "Diri chi 7araka (Add - Search - Exit): ";
		std::getline(std::cin, cmd);
		str_tolower(&cmd);
		choice = command_handler(cmd);
		if (choice == -1)
		{
			std::cout << "Please specify a valid operation!" << std::endl;
			continue ;
		}
		if (choice == 1)
			std::cout << "Choice: " << choice << std::endl;
		else if (choice == 2)
			std::cout << "Choice: " << choice << std::endl;
	}	while (choice);
	return (0);
}
