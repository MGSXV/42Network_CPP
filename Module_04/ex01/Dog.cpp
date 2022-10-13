/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:19:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/12 18:53:25 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "This is a `Hello` in dogs language!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Was I a good boi?" << std::endl;
}

Dog::Dog(const Dog& other)
{
	*this = other;
}

// Assignment operator overload
Dog&	Dog::operator=(Dog const& other)
{
	this->type = other.type;
    return (*this);
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
