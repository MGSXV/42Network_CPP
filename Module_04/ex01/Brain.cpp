/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:32:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/16 21:39:11 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor and destructor
Brain::Brain(void)
{
	this->ideas = new std::string[100];
	std::cout << "Yeah, big brain time!" << std::endl;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Ideas never die!" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

// Assignment operator overload
Brain& Brain::operator=(const Brain& other)
{
	if (this->ideas)
		delete[] this->ideas;
	this->ideas = new std::string[100];
	this->setIdeas(other.getIdeas());
	return (*this);
}

// Getters and setters
void Brain::setIdeas(const std::string *ideas)
{
	unsigned long	i;

	i = 0;
	while (i < sizeof(ideas) / sizeof(std::string))
		this->ideas[i] = ideas[i++];
}

void	Brain::setIdea(const std::string &idea, int index)
{
	if (index < 0 || index > 99)
		std::cerr << "Invalid index: " << index << std::endl;
	else
		this->ideas[index] = idea;
}

std::string*	Brain::getIdeas(void) const
{
	return (this->ideas);
}
