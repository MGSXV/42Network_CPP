/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:32 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/21 16:23:31 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickame();
		std::string	getphoneNumber();
		std::string	getSecret();
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickame(std::string nickname);
		void		setPhoneNumber(std::string nickname);
		void		setSecret(std::string nickname);
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	Secret;
};

#endif