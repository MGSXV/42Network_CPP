/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:09:50 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/26 00:00:04 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ClassA_H__
# define __ClassA_H__

# include<iostream>
# include "Base.hpp"

typedef std::string	str_t;

class	ClassA : public Base
{
	public:
		~ClassA(void);
};

#endif