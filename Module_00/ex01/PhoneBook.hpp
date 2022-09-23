/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:49 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/23 01:32:06 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		Contact		getContact(int index) const;
		void		setContact(const Contact &contact);
		int			getContactNum(void) const;
		void		setContactNum(int num);
		void		displayContacts(void);
		std::string	formatDisplay(std::string str);
		PhoneBook(void);
	private:
		Contact	Contacts[8];
		int		ContactsNum;
};

#endif
