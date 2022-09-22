/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:30:33 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/22 20:05:54 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact&	Contact::operator=(const Contact&contact)
{
	this->FirstName = contact.getFirstName();
	this->LastName = contact.getLastName();
	this->Nickname = contact.getNickame();
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

std::string	Contact::getNickame() const
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
