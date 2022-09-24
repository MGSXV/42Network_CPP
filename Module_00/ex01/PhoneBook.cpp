/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:38 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/24 15:21:41 by sel-kham         ###   ########.fr       */
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
	static int	index;

	if (index >= 8)
		index = 0;
	this->Contacts[index++] = contact;
	if (this->getContactNum() < 8)
		this->setContactNum(this->getContactNum() + 1);
	std::cout << "New contact was created!" << std::endl;
}

void	PhoneBook::displayContacts(void)
{
	int	i;

	i = -1;
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (++i < this->ContactsNum)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		if (this->Contacts[i].getFirstName().length() > 10)
			std::cout << std::right << std::setw(10) << this->Contacts[i].getFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::right << std::setw(10) << this->Contacts[i].getFirstName() << "|";
		if (this->Contacts[i].getLastName().length() > 10)
			std::cout << std::right << std::setw(10) << this->Contacts[i].getLastName().substr(0, 9) + "." << "|";
		else
			std::cout << std::right << std::setw(10) << this->Contacts[i].getLastName() << "|";
		if (this->Contacts[i].getNickname().length() > 10)
			std::cout << std::right << std::setw(10) << this->Contacts[i].getNickname().substr(0, 9) + "." << "|";
		else
			std::cout << std::right << std::setw(10) << this->Contacts[i].getNickname() << "|";
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::displayContact(int index)
{
	std::cout << "First Name   :" << this->Contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name    :" << this->Contacts[index].getLastName() << std::endl;
	std::cout << "Nickname     :" << this->Contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number :" << this->Contacts[index].getphoneNumber() << std::endl;
	std::cout << "Secret       :" << this->Contacts[index].getSecret() << std::endl;
}
