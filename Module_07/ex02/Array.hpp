/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:38:29 by sel-kham          #+#    #+#             */
/*   Updated: 2022/12/31 18:49:51 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

template<class tc>
class Array
{
private:
	tc				*array;
	unsigned int	length;
public:
    // Constructors and destructors
	Array() : length(0)
	{
		this->array = new tc[0];
	}
	Array(unsigned int n)
	{
		if (static_cast<int>(n) > 0)
		{
			this->array = new tc[n]();
			this->length = n;
		}
		else
			throw std::runtime_error("Array: length must be non-zero!");
	}
	Array(const Array& other)
	{
		if (other.array && other.length)
		{
			this->array = new tc[other.length]();
			this->length = other.length;
			for (unsigned int i = 0; i < this->length; ++i)
				this->array[i] = other.array[i];
		}
		else
		{
			this->array = NULL;
			this->length = 0;
		}
	}
	Array	&operator=(const Array& other)
	{
		if (this != &other)
		{
			if (other.array && other.length)
			{
				this->array = new tc[other.length]();
				this->length = other.length;
				for (unsigned int i = 0; i < this->length; ++i)
					this->array[i] = other.array[i];
			}
			else
			{
				this->array = NULL;
				this->length = 0;
			}
		}
		return (*this);
	}
	tc	&operator[](unsigned int index) const
	{
		if (static_cast<int>(index) >= 0 && index < this->length)
			return (this->array[index]);
		throw std::runtime_error("Array: index out of range");
	}
	unsigned int	size() const { return this->length; }
	~Array()
	{
		delete [] this->array;
	}
};


#endif