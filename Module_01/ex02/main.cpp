/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:51:21 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/25 00:12:37 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef std::string	str_t;

int	main(void)
{
	str_t	str("HI THIS IS BRAIN");
	str_t	*ptr = &str;
	str_t	&ref = str;

	std::cout << "String address    : " << &str << std::endl;
	std::cout << "Pointer address   : " << &ptr << std::endl;
	std::cout << "Reference address : " << &ref << std::endl;
	std::cout << "String value      : " << str << std::endl;
	std::cout << "Pointer value     : " << *ptr << std::endl;
	std::cout << "Reference value   : " << ref << std::endl;
	return (0);
}
