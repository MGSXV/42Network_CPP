/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:05:52 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/11 19:42:14 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <iostream>
# include "ClapTrap.hpp"

typedef std::string	str_t;

class FragTrap : public virtual ClapTrap
{
	private:
	public:
		// Constructors and destructors
		FragTrap(void);
        ~FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap(const str_t &name);
		// Assignment operator overload
		FragTrap &operator=(const FragTrap &other);
		// Member functions
		void	highFivesGuys(void);
};

#endif