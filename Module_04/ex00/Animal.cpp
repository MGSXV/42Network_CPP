/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:15:41 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 05:31:26 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors and destructors
Animal::Animal(void)
{
	this->setType("Nothing yet!");
	std::cout << "Hello from Animal!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Goodbye from Animal!" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	*this = animal;
}

// Assignment operator overload
Animal& Animal::operator=(const Animal& animal)
{
	this->setType(animal.getType());
	return (*this);
}
