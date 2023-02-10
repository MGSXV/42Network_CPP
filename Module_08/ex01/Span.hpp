/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:02:19 by sel-kham          #+#    #+#             */
/*   Updated: 2023/01/31 21:16:18 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include<iostream>
# include<bits/stdc++.h>

typedef std::string	str_t;

class	Span
{
	private:
		unsigned int		max_size;
		std::vector<int>	v;
	public:
		// Constructors and destructors
		Span(void);
		~Span(void);
		Span(unsigned int max_size);
		Span(const Span& other);
		// Assignment operator
		Span &operator=(const Span& other);
		// Getters and setters
		unsigned int	getMaxSize(void) const;
		void			setMaxSize(unsigned int size);
		// Memeber functions
		void	addNumber(int number);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	printSpan(void) const;
};

#endif