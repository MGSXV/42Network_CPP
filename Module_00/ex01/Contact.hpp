/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:32 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/22 23:29:23 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickame(void) const;
		std::string	getphoneNumber(void) const;
		std::string	getSecret(void) const;
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickame(std::string phoneNumber);
		void		setPhoneNumber(std::string nickname);
		void		setSecret(std::string secret);
		// Constructors
		Contact& operator=(const Contact&contact);
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	Secret;
};

#endif