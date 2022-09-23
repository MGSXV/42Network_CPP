/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:56:27 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/23 02:01:33 by sel-kham         ###   ########.fr       */
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

std::string	inputHandler(const std::string field)
{
	std::string	userInput;

	userInput = "";
	do
	{
		std::cout << "Please enter contact's " << field << ": ";
		std::getline(std::cin, userInput);
		if (userInput == "")
			std::cout << "Contact's " << field << " cannot be empty!" << std::endl;
	} while (userInput == "");
	return (userInput);
}

void	addNewContact(Contact &contact)
{
	std::string	userInput;

	userInput = inputHandler("first name");
	contact.setFirstName(userInput);
	userInput = inputHandler("last name");
	contact.setLastName(userInput);
	userInput = inputHandler("nickname");
	contact.setNickname(userInput);
	userInput = inputHandler("phone number");
	contact.setPhoneNumber(userInput);
	userInput = inputHandler("secret");
	contact.setSecret(userInput);
}

int	getIndex(PhoneBook &book)
{
	std::string	line;
	int			i;

	do
	{
		std::cout << "Li bghit: ";
		std::getline(std::cin, line);
		try
		{
			i = std::stoi(line);
		}
		catch(const std::exception& e)
		{
			std::cout << "Please specify a valid number!" << std::endl;
			continue ;
		}
		if (i < 1 || i > book.getContactNum())
		{
			std::cout << "Please specify a valid number!" << std::endl;
			i = -1;
		}
	} while (i < 1 || i > book.getContactNum());
	
	return (i - 1);
}

int	main(void)
{
	int			choice;
	PhoneBook	book;
	Contact		contact;
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
		{
			if (book.getContactNum() >= 8)
			{
				std::cout << "This Phone book is full!" << std::endl;
				continue ;
			}
			addNewContact(contact);
			book.setContact(contact);
		}
		else if (choice == 2)
		{
			if (!book.getContactNum())
			{
				std::cout << "There are no contacts to display!" << std::endl;
				continue ;
			}
			book.displayContacts();
			book.displayContact(getIndex(book));
		}
		std::cout << "Chi haja akhra? (y/n): ";
		std::getline(std::cin, cmd);
		str_tolower(&cmd);
		if (cmd == "n")
		{
			std::cout << "thalla!!!" << std::endl;
			break ;
		}
	}	while (choice);
	return (0);
}
