/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:08:33 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 17:13:56 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors and destructors
WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "This is a `Hello` in wrong cats language!" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Goodbye! Also in wrong cats language!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}

// Assignment operator overload
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->type = other.type;
    return (*this);
}

// Member functions
void	WrongCat::makeSound(void) const
{
	std::cout << " /\\_/\\   ...meow.. wrongly!" << std::endl;
	std::cout << "( o.o )" << std::endl;
	std::cout << " > ^ <" << std::endl;
}
