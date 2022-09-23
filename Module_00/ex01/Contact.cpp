/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:30:33 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/23 00:33:40 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact&	Contact::operator=(const Contact&contact)
{
	this->FirstName = contact.getFirstName();
	this->LastName = contact.getLastName();
	this->Nickname = contact.getNickname();
	this->PhoneNumber = contact.getphoneNumber();
	this->Secret = contact.getSecret();
	return (*this);
}

std::string	Contact::getFirstName() const
{
	return (this->FirstName);
}

std::string	Contact::getLastName() const
{
	return (this->LastName);
}

std::string	Contact::getNickname() const
{
	return (this->Nickname);
}

std::string	Contact::getphoneNumber() const
{
	return (this->PhoneNumber);
}

std::string	Contact::getSecret() const
{
	return (this->Secret);
}

void	Contact::setFirstName(std::string firstName)
{
	this->FirstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->LastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->Nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->PhoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string secret)
{
	this->Secret = secret;
}
