/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:15:41 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 20:31:43 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors and destructors
Animal::Animal(void)
{
	this->setType("Magical creature");
	std::cout << "Hello from Animal!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Goodbye from Animal!" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "This is the copy constructor from Animal!" << std::endl;
	*this = animal;
}

// Assignment operator overload
Animal& Animal::operator=(const Animal& animal)
{
	this->setType(animal.getType());
	return (*this);
}

// Getters and setters
str_t	Animal::getType() const
{
	return (this->type);
}

void Animal::setType(const str_t& type)
{
	this->type = type;
}

// Member functions
void	Animal::makeSound(void) const
{
	std::cout << "AAAAAAAaaaaaAAAAAAAaaaaAAaaaaaaAa!!!" << std::endl;
}
