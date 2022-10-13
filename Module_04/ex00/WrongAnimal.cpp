/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:07:58 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 17:24:35 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors and destructors
WrongAnimal::WrongAnimal(void)
{
	this->setType("Magical creature");
	std::cout << "Hello from Animal!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Goodbye from Animal!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "This is the copy constructor from Animal!" << std::endl;
	*this = animal;
}

// Assignment operator overload
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	this->setType(animal.getType());
	return (*this);
}

// Getters and setters
str_t	WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::setType(const str_t& type)
{
	this->type = type;
}

// Member functions
void	WrongAnimal::makeSound(void) const
{
	std::cout << "AAAAAAAaaaaaAAAAAAAaaaaAAaaaaaaAa!!!" << std::endl;
}
