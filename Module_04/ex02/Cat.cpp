/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:21:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/17 04:14:05 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors and destructors
Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "This is a `Hello` in cats language!" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Goodbye! Also in cats language!" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

// Assignment operator overload
Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
	*this->brain = *other.brain;
    return (*this);
}

// Getters and setters
void	Cat::setBrain(Brain *&new_brain)
{
	if (this->brain)
		delete this->brain;
	this->brain = new_brain;
}

Brain*    Cat::getBrain(void) const
{
	return (this->brain);
}

// Member functions
void	Cat::makeSound(void) const
{
	std::cout << " /\\_/\\   ...meow!" << std::endl;
	std::cout << "( o.o )" << std::endl;
	std::cout << " > ^ <" << std::endl;
}
