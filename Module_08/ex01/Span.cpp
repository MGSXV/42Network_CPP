/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:02:31 by sel-kham          #+#    #+#             */
/*   Updated: 2023/02/01 19:41:07 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors and destructors
Span::Span(void)
{
	this->max_size = 1;
}

Span::Span(unsigned int size)
{
	this->max_size = size;
}

Span::~Span(void) { }

Span::Span(const Span& other)
{
	this->max_size = other.max_size;
}

// Assignment operator
Span	&Span::operator=(const Span& other)
{
	this->max_size = other.max_size;
	return (*this);
}

// Getters and setters
unsigned int	Span::getMaxSize(void) const
{
	return (this->max_size);
}

void	Span::setMaxSize(unsigned int value)
{
	this->max_size = value;
}

// Memeber functions
void	Span::addNumber(int number)
{
	if (this->v.size() <= this->max_size)
		v.push_back(number);
	else
		throw std::runtime_error("You reached maximum size of span!");
}

int	Span::shortestSpan(void) const
{
	std::vector<int>	tmp_v;
	int					tmp_span = INT_MAX;

	if  (this->v.size() < 2)
		throw std::runtime_error("This functionality requires more than one element!");
	tmp_v = this->v;
	std::sort(tmp_v.begin(), tmp_v.end());
	for (size_t i = 0; i < tmp_v.size() - 1; i++)
		if (tmp_v[i + 1] - tmp_v[i] < tmp_span)
			tmp_span = tmp_v[i + 1] - tmp_v[i];
	return (tmp_span);
}

int	Span::longestSpan(void) const
{
	int	span;

	if (this->v.size() > 1)
	{
		span = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
		return (span);
	}
	throw std::runtime_error("This functionality requires more than one element!");
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end <= begin)
		throw std::runtime_error("Invalid Container Error!");
	while (begin != end && this->v.size() < this->max_size)
	{
		this->v.push_back(*begin);
		begin++;
	}
}

void	Span::printSpan(void) const
{
	size_t	i;

	i = -1;
	while (++i < this->v.size())
		std::cout << this->v[i] << std::endl;
}
