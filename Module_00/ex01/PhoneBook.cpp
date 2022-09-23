/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:38 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/23 01:38:43 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->ContactsNum = 0;
}

int	PhoneBook::getContactNum(void) const
{
	return (this->ContactsNum);
}

void	PhoneBook::setContactNum(int i)
{
	this->ContactsNum = i;
}

Contact PhoneBook::getContact(int index) const
{
	if (index < this->ContactsNum)
		return (this->Contacts[index]);
	std::cout << "Invalid index, please try again." << std::endl;
	return (Contact());
}

void	PhoneBook::setContact(const Contact &contact)
{
	this->Contacts[this->ContactsNum] = contact;
	this->setContactNum(this->ContactsNum + 1);
	std::cout << "New contact was created!" << std::endl;
}

std::string PhoneBook::formatDisplay(std::string str)
{
	std::string	width;
	int			i;

	if (str.length() <= 10)
	{
		i = -1;
		width = "";
		while (++i < (int) (10 - str.length()))
			width += " ";
		return (str + width);
	}
	str.resize(9);
	return (str + ".");
}

void	PhoneBook::displayContacts(void)
{
	int	i;

	i = -1;
	if (!this->ContactsNum)
	{
		std::cout << "There are no contacts to display!" << std::endl;
		return ;
	}
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (++i < this->ContactsNum)
	{
		std::cout << "|";
		std::cout << i + 1 << std::setw(10) << "|";
		std::cout << this->formatDisplay(this->Contacts[i].getFirstName()) << "|";
		std::cout << this->formatDisplay(this->Contacts[i].getLastName()) << "|";
		std::cout << this->formatDisplay(this->Contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
}
