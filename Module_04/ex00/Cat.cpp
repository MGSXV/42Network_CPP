/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:21:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 18:46:39 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors and destructors
Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "This is a `Hello` in cats language!" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Goodbye! Also in cats language!" << std::endl;
}

Cat::Cat(const Cat& other)
{
	*this = other;
}

// Assignment operator overload
Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
    return (*this);
}

// Member functions
void	Cat::makeSound(void) const
{
	std::cout << " /\\_/\\   ...meow!" << std::endl;
	std::cout << "( o.o )" << std::endl;
	std::cout << " > ^ <" << std::endl;
}




