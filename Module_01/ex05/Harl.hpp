/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 02:48:44 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/27 02:56:45 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __HARL_HPP__
# define __HARL_HPP__

#include <iostream>

typedef std::string	str_t;

class	Harl
{
	public:
		void	complain(str_t level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif