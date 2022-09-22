/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:38 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/22 20:14:00 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->ContactsNum = 0;
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
	if (this->ContactsNum >= 8)
	{
		std::cout << "This Phone book is full!" << std::endl;
		return ;
	}
	this->Contacts[this->ContactsNum] = contact;
	this->ContactsNum++;
	std::cout << "New contact was created!" << std::endl;
}
