/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:19:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/17 03:04:25 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "This is a `Hello` in dogs language!" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Was I a good boi?" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	this->brain = other.brain;
}

// Assignment operator overload
Dog&	Dog::operator=(Dog const& other)
{
	this->type = other.type;
	this->brain = other.brain;
    return (*this);
}

// Getters and setters
void	Dog::setBrain(Brain *&new_brain)
{
	if (this->brain)
		delete this->brain;
	this->brain = new_brain;
}

Brain*    Dog::getBrain(void) const
{
	return (this->brain);
}

// Member functions
void	Dog::makeSound(void) const
{
	std::cout << "       '''," << std::endl;
	std::cout << "    o_)O \\)____)\"" << std::endl;
	std::cout << "     \\_        )" << std::endl;
	std::cout << "woof!  '',,,,,," << std::endl;
	std::cout << "         ||  ||" << std::endl;
	std::cout << "        \"--'\"--'" << std::endl;
}
