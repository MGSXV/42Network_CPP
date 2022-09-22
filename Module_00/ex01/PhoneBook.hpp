/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:41:49 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/21 17:49:49 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		Contact	getContact(int index) const;
		void	setContact(const Contact &contact);
		PhoneBook(void);
	private:
		Contact	Contacts[8];
		int		ContactsNum;
};

#endif
