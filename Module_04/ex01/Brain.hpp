/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:32:23 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 18:51:53 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

// typedef std::string	str_t;

class Brain
{
	private:
		std::string	*ideas;
	public:
		// Constructors and destructors
		Brain(void);
		~Brain(void);
		Brain(const Brain & other);
		// Assignment operator overload
		Brain & operator=(const Brain & other);
		// Getters and setters
		std::string*	getIdeas(void) const;
		void	setIdeas(const std::string *ideas);
		void	setIdea(const std::string &idea, int index);
};

#endif